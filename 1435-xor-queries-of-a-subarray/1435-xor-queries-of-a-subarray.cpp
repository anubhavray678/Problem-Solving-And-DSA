class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;

        for(auto query : queries){
            int left = query[0];
            int right = query[1];
            int xori = 0;
            for(int i = left; i <= right; ++i){
                xori ^= arr[i];
            }
            ans.push_back(xori);
            xori = 0;
        }
        return ans;
    }
};