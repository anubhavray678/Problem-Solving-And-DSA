class Solution {
public:
    int tribonacci(int n) {
        
        vector<int> memo(n+1);
        memo[0] = 0;
        if(n==0) return  memo[0];
        memo[1] = 1;
        if(n == 1) return  memo[1];
        memo[2] = 1;
        if(n == 2) return  memo[2];

        for(int i = 3;i <= n; ++i){
            memo[i] = memo[i-1] + memo[i-2] + memo[i-3];
        }
        return memo[n];
    }
};