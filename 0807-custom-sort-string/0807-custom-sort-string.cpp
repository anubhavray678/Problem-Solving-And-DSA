class Solution {
public:
    string customSortString(string order, string s) {
        string str="";
        unordered_map<char,int> m;
        for(int i = 0; i<s.size(); ++i){
            m[s[i]]++;
        }
       
        for(int i =0; i<order.size(); ++i){
            
                if(m.find(order[i]) != m.end())
                {
                    while(m[order[i]]){
                        str += order[i];
                        m[order[i]]--;
                    }
                   m.erase(order[i]);
                }
            
            
        }
        for(auto k : m ){
            
                if(k.second != 0)
                {
                for(int i=0;i<k.second;i++){
                    str+=k.first;
                    m[k.first]--;
                }
                   
                }
       
            
        }
        
        return str;
    }
};