class Solution {
public:
    void helper(vector<vector<int>>& result,vector<int>& combination,
        vector<int>& candidates, int target,int index) {
        if(target == 0){
            result.push_back(combination);
        }
        for(int i = index; i<candidates.size(); ++i) {
            if(i>=0 && candidates[i] <= target && i < candidates.size()){
                combination.push_back(candidates[i]);
                helper(result,combination,candidates,target-candidates[i],i);
                combination.pop_back();

            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;

        helper(result, combination, candidates, target, 0);
        return result;
    }
};