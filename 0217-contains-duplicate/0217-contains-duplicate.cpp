class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int key : nums){
            m[key]++;
            }
        for(auto ele:m){
            if(ele.second>1){
                return true;
            }
            
        }
        return false;
    }
};