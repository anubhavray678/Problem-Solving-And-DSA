// in an array the maximum possible (and) will the 
// max value of array only when all the elements of the 
// array is equal.
// for example
//   --- {1} - 1
//   ----{2,2} - 2
//   ---- {8,7} - 0
//   ---- {8,8} -8
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxLenSubArray = 0;
        int maxNum = *max_element(nums.begin(), nums.end());

        // for(int i = 0; i< nums.size(); ++i){
        //     if(nums[i] == maxNum){
        //         int temp = 1;
        //         while (i + 1 < nums.size() && nums[i + 1] == maxNum) {
        //             temp++;
        //             i++; 
        //         }
        //         maxLenSubArray = max(maxLenSubArray, temp);
        //     }
            
        // }
        int cnt = 0;
        for(int i = 0; i< nums.size(); ++i){
            if(nums[i] == maxNum){
               cnt++;
            }else{
                cnt =0;
            }
            maxLenSubArray = max(maxLenSubArray, cnt);
        }
        return maxLenSubArray;
    }
};