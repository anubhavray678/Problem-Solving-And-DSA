class Solution {
public:
    int maxPower(string s) {
        int sum=1;
        vector<int> v;
         for(int i = 0; i< s.size(); ++i){
            for(int j = i+1; j < s.size(); ++j)
            {
                if(s[i] == s[j])
                {
                    sum++;
             	    i=j;
                }
            
                if(s[i] != s[j])
                {
                    break;
                }
            
            }
            v.push_back(sum);
            sum=1;
        }
        return *max_element(v.begin(),v.end());
    }
};