class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n = nums.size() , count =0;
        // set<int> s;
        // vector<int> v;
        // for(int i =0 ; i<n; ++i)
        // {
        //     s.insert(nums[i]);
        // }
        // for(int x : s){
        //     v.push_back(x);
        // }
        // nums =v;
        // v.clear();
        // s.clear();
        // return nums.size(); 
          int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};