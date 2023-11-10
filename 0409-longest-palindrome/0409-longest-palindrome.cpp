class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        int count = 0,cnt=0;

        for(char c : s){
            m[c]++;
        }

        for(auto ele : m){
            if(ele.second %2 ==0){
                count += ele.second;
            }
            if(ele.second %2 != 0){
                if(ele.second >= 1){
                    count += ele.second-1;
                    cnt++;
                }
            }
            
        }
        if(cnt == 0){
            return count;
        }

        return count+cnt/cnt;
    }
};