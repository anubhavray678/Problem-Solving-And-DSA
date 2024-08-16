class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0, r=0, jump=0, n=nums.size();
        while(r<n-1)
        {
            int ma=0;
            for( int i = l ; i<=r; ++i)
            {
                ma = max(ma ,i + nums[i]);
            }
            l=r+1;
            r=ma;
            jump++;
        }
        return jump;
    }
};