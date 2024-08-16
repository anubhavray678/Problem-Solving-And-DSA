class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = n/2;
        unordered_map<int ,int> m;

        for(int x : nums)
        {
            m[x]++;
        } 
        for(auto i =m.begin() ; i != m.end(); ++i)
        {
            if( i->second > maxi){
                return i->first;
            }
        }
    //     unordered_map<int, int>::iterator it = m.begin();
    //     while (it != m.end()) {
    //             if(it->second > maxi){
    //                 return it->first;
    //             }
    //     ++it;
    // }
 
        return -1;
    }
};