class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minN = arrays[0][0];
        int maxN = arrays[0][arrays[0].size() - 1];
        int ans = 0;

        for (int i = 1; i < arrays.size(); ++i) {
            // Calculate potential max distances
            ans = max(ans, abs(arrays[i][arrays[i].size() - 1] - minN));
            ans = max(ans, abs(maxN - arrays[i][0]));

            // Update global min and max values
            minN = min(minN, arrays[i][0]);
            maxN = max(maxN, arrays[i][arrays[i].size() - 1]);
        }

        return ans;
    }
};
