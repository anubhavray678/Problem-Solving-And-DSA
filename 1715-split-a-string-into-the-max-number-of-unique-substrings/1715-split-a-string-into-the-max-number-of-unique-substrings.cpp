class Solution {
public:
    int maxUniqueSplit(string str) {
        unordered_set<string> uniqueSubstrings;
        return backtrack(str, 0, uniqueSubstrings);
    }
    
    int backtrack(const string& str, int start, unordered_set<string>& uniqueSubstrings) {
        if (start == str.length()) {
            return 0;
        }
        
        int maxSplits = 0;
        string currentSubstring = "";
        
        for (int i = start; i < str.length(); ++i) {
            currentSubstring += str[i];
            if (uniqueSubstrings.find(currentSubstring) == uniqueSubstrings.end()) {
                uniqueSubstrings.insert(currentSubstring);
                maxSplits = max(maxSplits, 1 + backtrack(str, i + 1, uniqueSubstrings));
                uniqueSubstrings.erase(currentSubstring);
            }
        }
        
        return maxSplits;
    }
};
