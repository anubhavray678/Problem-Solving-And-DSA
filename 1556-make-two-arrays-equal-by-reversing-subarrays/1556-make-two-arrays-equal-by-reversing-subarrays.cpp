class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        int l =0, r=0;
        while(l<target.size() && r<arr.size()) {
            if(target[l] != arr[r]){
                return false;
            }
            l++;r++;
        }
        return true;
    }
};