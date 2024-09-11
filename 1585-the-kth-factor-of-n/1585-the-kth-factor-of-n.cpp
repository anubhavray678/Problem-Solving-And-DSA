class Solution {
public:
    int kthFactor(int n, int k) {
        int kThFactor = -1;

        for(int i =1; i<=n && k; ++i){
            if(n % i == 0){
                kThFactor = i; 
                k--;
            }   
        }
        if(k==0)return kThFactor;
        return -1;
    }
};