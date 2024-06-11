class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int> m;
        for(int i=0; i<arr.size(); ++i){
            m[arr[i]]++;

        }
        vector<int> v;
        for(auto x: m){
            v.push_back(x.second);
        }
        set<int> s(v.begin(), v.end());
        return s.size() == v.size();
    }
};