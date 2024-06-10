class Solution {
public:

    void rotateclockwise(string &s){
        char c = s[0];
        int index = 1;
        while(index<s.size()){
            s[index-1] =s[index];
            index++;
        }
        s[s.size()-1] =c;

    }
    void antirotateclockwise(string &s){
        char c = s[s.size()-1];
        int index = s.size()-2;
        while(index>=0){
            s[index+1] =s[index];
            index--;
        }
        s[0] =c;

    }
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string clockwise,anticlockwise;
        // clockwise=s;
        for(int i =0 ; i<s.size(); ++i){
            rotateclockwise(s);
            if(s == goal){
            return true;
        }
        }
        return false;
    }
};