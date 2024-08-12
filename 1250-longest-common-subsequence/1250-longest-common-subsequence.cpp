// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         // int n = text1.size();
//         // int m = text2.size();
//         // int s[n+1][m+1];

//         // for(int i = 0; i <= n; ++i){
//         //     s[i][0] = 0;
//         // }
//         // for(int j =0; j<= m; ++j){
//         //     s[0][j] = 0;
//         // }
//         // for(int i = 1; i <= n; ++i){
//         //     for(int j =1; j <= m; ++j){
//         //        if(text1[i-1] == text2[j-1]){
//         //             s[i][j] = 1 + s[i-1][j-1];
//         //         }
//         //         else{
//         //              s[i][j] = max(s[i][j-1], s[i-1][j]);
//         //         }
//         //     }
//         // }
//         // return s[n][m];
//       vector<vector<int>>memo(text1.size(),vector<int>(text2.size(), -1));
//        return helper(text1,text2,0,0,memo);
//     }
//     int helper(string text1, string text2,int i, int j,vector<vector<int>>&memo){
//         if(i == text1.size() || j == text2.size())return 0;
//         if(memo[i][j] != -1)return memo[i][j];
//         if(text1[i] == text2[j]){
//             return memo[i][j]= helper(text1,text2, i+1, j+1, memo) + 1;
//         }
        
//         return memo[i][j] = max(helper(text1,text2, i, j+1,memo), helper(text1,text2,i+1,j,memo));;
//     }
// };
class Solution {
  vector<vector<int>> dp;

  int lcs(int i, int j, string &text1, string &text2) {
    if (i >= text1.size() || j >= text2.size()) {
      return 0;
    }
    if (dp[i][j] != -1) {
      return dp[i][j];
    }
    if (text1[i] == text2[j]) {
      return dp[i][j] = 1 + lcs(i + 1, j + 1, text1, text2);
    }
    return dp[i][j] = max(lcs(i, j + 1, text1, text2), lcs(i + 1, j, text1, text2));
  }

public:
  int longestCommonSubsequence(string text1, string text2) {
    dp.resize(text1.size(), vector<int>(text2.size(), -1));
    return lcs(0, 0, text1, text2);
  }
};