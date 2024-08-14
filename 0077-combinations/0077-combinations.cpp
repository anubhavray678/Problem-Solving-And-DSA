class Solution {
public:
 void helper(vector<vector<int>>& result, vector<int>& combination,
        vector<int> &numbers, int k ,int index) {
            if(combination.size() == k){
                result.push_back(combination);
            }
            for(int i = index; i<numbers.size(); ++i){
                if(i>=0 && i < numbers.size()){
                    combination.push_back(numbers[i]);
                    helper(result,combination, numbers, k,i+1);
                    combination.pop_back();
                }
            }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> combination;
        vector<int> numbers;
        for(int i = 1;i<=n; ++i){
            numbers.push_back(i);
        }
        helper(result, combination,numbers, k,0);
        return result;
    }
};