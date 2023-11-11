class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> ans;
        for(int i = 1; i <= size(nums); i++) 
            if(!binary_search(begin(nums), end(nums), i))
                ans.push_back(i);
        return ans;
    }
};