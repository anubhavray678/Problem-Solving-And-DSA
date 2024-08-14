class Solution {
public:
    void helper(vector<vector<int>>& result, vector<int>& combination,
        vector<int> &numbers, int k, int target ,int index) {
            if(target == 0 && combination.size() == k){
                result.push_back(combination);
            }
            for(int i = index; i<numbers.size(); ++i){
                if(i>=0 && numbers[i] <= target && i < numbers.size()){
                    combination.push_back(numbers[i]);
                    helper(result,combination, numbers, k, target-numbers[i],i+1);
                    combination.pop_back();
                }
            }
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        vector<int> numbers;
        for(int i = 1;i<=9; ++i){
            numbers.push_back(i);
        }
        helper(result, combination,numbers, k, target,0);
        return result;
    }
};