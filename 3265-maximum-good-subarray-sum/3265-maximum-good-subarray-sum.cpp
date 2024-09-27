
// class Solution {
// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) {
//         long long ans = INT_MIN;
//         for(int i =0; i< nums.size(); ++i){
//             long long sum = nums[i];
//             for(int j = i+1; j<nums.size(); ++j) {
//                 sum += nums[j];
//                 if(abs(nums[i] - nums[j]) == k){
//                     if(ans<sum){
//                         ans = sum;
//                     }
//                 }
//             }
//             sum = 0;
//         }
//         return ans == INT_MIN ? 0 : ans;
//     }
// };

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long ans = LONG_MIN, preSum = 0;
        unordered_map<int, int> mp;
        vector<long> pre;
        for(auto it : nums){
            preSum += it;
            pre.push_back(preSum);
        }
        for(int i = 0 ; i < n ; i++){
            int diff1 = nums[i] - k, diff2 = nums[i] + k;
            if(mp.contains(diff1))
                ans = max(ans, pre[i] - pre[mp[diff1]] + diff1);
            if(mp.contains(diff2))
                ans = max(ans, pre[i] - pre[mp[diff2]] + diff2);
            if(mp.contains(nums[i]))
                mp[nums[i]] = pre[i] < pre[mp[nums[i]]] ? i : mp[nums[i]];
            else
                mp[nums[i]] = i;
        }
        return ans != LONG_MIN ? ans : 0;
    }
};