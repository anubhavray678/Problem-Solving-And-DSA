class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort to keep numbers in ascending order
        unordered_set<int> set(nums.begin(), nums.end());  // Populate set for quick lookup
        int longestStreak = 0;

        for (auto n : set) {
            long long ele = n;  // Start with each unique number
            int currentStreak = 0;

            // Follow the sequence by squaring `ele` and checking if it exists in the set
            while (set.find(ele) != set.end()) {
                currentStreak++;
                ele *= ele;  // Move to the next square
                
                // Break if squaring exceeds the constraint (to prevent overflow)
                if (ele > 1e5) break;
            }

            // Update longest streak found
            longestStreak = max(longestStreak, currentStreak);
        }

        // Return the length of the longest streak if it's at least 2, otherwise -1
        return longestStreak >= 2 ? longestStreak : -1;
    }
};
