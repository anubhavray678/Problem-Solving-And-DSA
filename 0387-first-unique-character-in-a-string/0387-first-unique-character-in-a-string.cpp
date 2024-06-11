class Solution {
public:
    int firstUniqChar(string s) {
        // char letter;
        // unordered_map<char,int>m;
        // for(char c: s){
        //     m[c]++;
        // }
        // int j=0;
        // for(auto ele : m){
        //     if(ele.second == 1){
        //         j++;
        //         letter = ele.first;
        //         if(j==s.size()){
        //             return 0;
        //         }
        //     }
        // }
        // for(int i = 0; i < s.size(); ++i){
        //     if(s[i] == letter){
        //         return i;
        //     }
        // }
        // return -1;
        // optimised O(n)
        vector<int> chr(26,0);
        for(int i=0; i< s.size(); ++i){
            int temp = s[i] - 'a';
            chr[temp]++;
        }
        for(int i=0; i< s.size(); ++i){
            int temp = s[i] - 'a';
            if(chr[temp] == 1){
                return i;
            }
        }
        return -1;
    }
};