class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        int n = words.size();

        vector<vector<int>> ans;
        unordered_map<string, int> mp;

        for (int i = 0; i < n; i++) {
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            mp[temp] = i;
        }
         if(mp.find("")!=mp.end()){
             for(int i = 0; i < words.size(); i++){
                 if(i == mp[""]) continue;
                 if(isPali(words[i])) ans.push_back({mp[""], i}); 
             }
         }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < words[i].size(); j++) {
                string prefix = words[i].substr(0, j);
                string suffix = words[i].substr(j, words[i].size() - j);
                if (mp.find(prefix) != mp.end() && mp[prefix] != i &&
                    isPali(suffix)) {
                    ans.push_back({i, mp[prefix]});
                }
                if (mp.find(suffix) != mp.end() && mp[suffix] != i &&
                    isPali(prefix)) {
                    ans.push_back({mp[suffix], i});
                }
            }
        }
        return ans;
    }

private:
    bool isPali(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};