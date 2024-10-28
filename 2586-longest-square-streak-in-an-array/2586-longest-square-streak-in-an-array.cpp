class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the numbers
        int longestStreak = 0;  // To keep track of the longest streak found
        unordered_set<int> set(nums.begin(), nums.end());  // Store nums in a set for quick lookup

        for (int i = 0; i < nums.size(); ++i) {
            long long ele = nums[i];  // Use long long to avoid overflow
            int currentStreak = 0;

            // Follow the sequence of squares starting from `ele`
            while (set.find(ele) != set.end()) {
                currentStreak++;
                ele *= ele;  // Move to the next square
                
                // Break the loop if the square exceeds the constraints
                if (ele > 1e5) break;
            }

            // Update the longest streak found so far
            longestStreak = max(longestStreak, currentStreak);
        }

        // If longest streak is at least 2, return it; otherwise, return -1
        return longestStreak >= 2 ? longestStreak : -1;
    }
};
