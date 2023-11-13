class Solution {
public:
    string removeStars(string s) {
        string str;
        stack <char> stk;

        for(int i =0; i< s.size(); ++i)
        {
             if(s[i] =='*')
            {
                stk.pop();
            }
            else
            stk.push(s[i]);
        }

        while (!stk.empty())
        {
            str += stk.top();
            stk.pop();
        }
        reverse(str.begin(),str.end());
    return str;
    }
};