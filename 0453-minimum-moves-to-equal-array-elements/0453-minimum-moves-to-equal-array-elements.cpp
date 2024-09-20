class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_ele = *min_element(nums.begin(), nums.end());
        int count = 0;
        for(int n : nums){
            count += n - min_ele;
        }

        return count;
    }
};