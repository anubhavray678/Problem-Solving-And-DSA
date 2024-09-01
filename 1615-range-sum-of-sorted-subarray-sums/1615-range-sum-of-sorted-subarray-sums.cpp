class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>subArrSum;
        int ans=0;
        for(int i =0;i <n; ++i){
            int sum = nums[i];
            subArrSum.push_back(sum);
            for(int j=i+1; j<n;++j){
                sum += nums[j];
                subArrSum.push_back(sum);
            }
        }
        sort(subArrSum.begin(), subArrSum.end());
        
        for(int i=left-1;i<right;++i){
            ans =(ans+ subArrSum[i]) %1000000007;
        }
        return ans;
    }
};