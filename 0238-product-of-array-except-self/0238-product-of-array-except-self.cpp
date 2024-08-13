class Solution {
public:
    // int check(vector<int>& nums){
    //     for(int i =0; i< nums.size(); ++i){
    //         if(nums[i] == 0){
    //             return  i;
    //         }
    //     }
    //     return -1;
    // }
    // int count(vector<int>& nums){
    //     int count = 0;
    //     for(int i =0; i< nums.size(); ++i){
    //         if(nums[i] == 0){
    //              count++;
    //         }
    //     }
    //     return count;
    // }
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans(nums.size(), 0);
        // int mul = 1;
        
        // int checkZero = check(nums);
        // if(checkZero != -1){
        //     if(count(nums) == 1){
        //         for(int ele : nums){
        //             if(ele != 0){
        //                 mul *= ele;
        //                 ans[checkZero] = mul;
        //             }
        //         }
        //     }else{
        //         return ans;
        //     }
        // }else{
        //     int left = 1;
        //     int right = 1;
        //     for(int ele : nums){
        //         mul*=ele;
        //     }
        //     for(int i =0; i< nums.size(); ++i){
        //         ans[i] = mul/nums[i];
        //     }

        // }
        // return ans;
        vector<int> ans(nums.size(), 1);
        int left = 1;
        for(int i = 0; i< ans.size(); ++i){
            ans[i] *= left;
            left *= nums[i];
        }
        int product_right = 1;
        for (int i = ans.size() - 1; i >= 0; --i) {
                ans[i] *= product_right;
                product_right *= nums[i];
        } 
        return ans;
    }
};