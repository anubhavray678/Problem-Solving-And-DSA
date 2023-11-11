class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1 = INT_MIN ;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] > max1){
                max1 = nums[i] ;
            }
        }
        int max2 = INT_MIN ;
        for (int i=0; i<nums.size(); i++){
            if (max2 < nums[i] && nums[i] < max1){
                max2 = nums[i] ;
            }
        }
        bool flag = 0 ;
        int max3 = INT_MIN ;
        for (int i=0; i<nums.size(); i++){
            if (max3 <= nums[i] && nums[i] < max2){
                max3 = nums[i] ;
                flag = 1 ;
            }
        }
        if (flag) return max3 ;
        return max1 ;
    }
};