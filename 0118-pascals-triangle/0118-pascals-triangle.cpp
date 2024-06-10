class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1; i <= numRows; ++i){
            vector<int> temp = pascal(i);
            result.push_back(temp);
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