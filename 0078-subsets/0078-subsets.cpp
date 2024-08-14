class Solution {
public:
    void backtrack(vector<int>& nums, int index, vector<int>& temp, vector<vector<int>> &ans) {
        ans.push_back(temp);
        for(int i = index; i<nums.size(); ++i){
            if(i>=0 && i<nums.size()){
                temp.push_back(nums[i]);
                backtrack(nums,i+1,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(nums, 0, temp, ans);
        return ans;
    }
};