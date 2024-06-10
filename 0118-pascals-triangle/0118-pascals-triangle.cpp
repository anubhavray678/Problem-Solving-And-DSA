class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1; i <= numRows; ++i){
            result.push_back(pascal(i));
        }
        return result;
    }
    vector<int> pascal(int row){
        long long res = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int i = 1; i < row; i++) {
            res = res * (row - i);
            res = res / i;
            ansRow.push_back(res);
        }
        return ansRow;
    }
};