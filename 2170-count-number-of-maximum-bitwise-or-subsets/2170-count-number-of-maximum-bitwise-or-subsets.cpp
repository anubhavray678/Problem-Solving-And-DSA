class Solution {
public:
    int res = 0;
    int maxNum = 0;
    void backtrack(vector<int>& nums ,int start, int val){
        if(val == maxNum)res++;
        for(int  i = start; i<nums.size(); ++i){
            backtrack(nums, i+1, val|nums[i]);
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        for(int num : nums){
            maxNum |=num;
        }
        backtrack(nums,0,0);
        return res;
    }
};