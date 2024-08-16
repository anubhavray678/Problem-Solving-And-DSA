class Solution {
public:
    void reverseArr(vector<int>& nums, int start , int end) {
            
        for (int i = 0; i < (end-start)/2; ++i)
        {
            int temp = nums[(end-1) -i];
            nums[(end-1) -i] = nums[start+i];
            nums[start+i] = temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();

        k = k % n;
        reverseArr(nums, 0, n);
        reverseArr(nums,0,0+k);
        reverseArr(nums,0+k,n);

        
    }
};