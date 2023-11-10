class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        int count=0;
        string str ="";
        for(int i = 0; i<s.size(); ++i)
        {
            
            if(s[i] == ' ')
            {
               int pos = str[str.size()-1] - '0';
               str.pop_back();
               ans[pos] = str;
               str.clear();
               count++;
            }
          
            else{
                str += s[i];
            }
        }
          
        string b;
        for(int i = 0; i<str.size(); ++i)
        {
            int pos = str[str.size()-1] - '0'; 
            str.pop_back();
            ans[pos] = str;
            b += str[i];
            str.clear();
            count++;

        }
       
       
        string a;
        for(int i=1; i<10; i++){
            if(ans[i].length()>0)
                a += ans[i] + ' ';

        }
        a.pop_back();
        
        return a;
    }
};