class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& cookie) {
    
        int n = greed.size();
        int m = cookie.size();
        sort(cookie.begin(), cookie.end());
        sort(greed.begin(), greed.end());
        int l = 0;
        int r = 0;
        while(l < n && r<m){
            if(greed[l] <= cookie[r]){
                l++;
            }
            r++;
        }
        return l;
    }
};