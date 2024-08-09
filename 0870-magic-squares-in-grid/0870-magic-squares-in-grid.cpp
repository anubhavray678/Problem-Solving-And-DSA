// class Solution {
// public:
//     bool magicSquare(vector<vector<int>>& grid, int s, int e){
//         bool seen[10] = {false};
//         for (int i = 0; i < 3; i++) {
//             for (int j = 0; j < 3; j++) {
//                 int num = grid[0 + i][0 + j];
//                 if (num < 1 || num > 9) return false;
//                 if (seen[num]) return false;
//                 seen[num] = true;
//             }
//         }
        
//             int dS1=0,dS2=0,lS=0,rS=0;
//             int dE1=0,dE2=0,lE=0,rE=0;
//             for(int i = 0; i<=s ;++i){
//                 dS1 += grid[i][i]; 
//                 dS2 += grid[i][s-i]; 
//                 lS += grid[0][i]; 
//                 rS += grid[i][0]; 
//             }
            
//             for(int i = s; i>=0 ; --i){
//                 dE1 += grid[i][i]; 
//                 dE2 += grid[s-i][s-i]; 
//                 lE += grid[0][i]; 
//                 rE += grid[s-i][s]; 
//             }
//             if(dS1 == dS2 && lS == rS && dS1 == rS && dS2 == lS){
//                 if(dE1 == dE2 && lE == rE && dE1 == rE && dE2 == lE){

//                     return true;
//                 }
//                 }
        
//         return false;
//     }
   
//     int numMagicSquaresInside(vector<vector<int>>& grid) {
//         int row = grid.size();
//         int col = grid[0].size();
//         int count = 0;
//         if(row < 3 || col < 3) return 0;
        
//         for(int i = 0; i<row-2; ++i){
//             for(int j = 0; j< col-2; ++j){
//                 if(magicSquare(grid , i+2,j+2) == true){
//                     count++;
//                     break;
//                 }
//                 break;
//             }
//         }
        
//         return count;
//     }
// };
class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int row = 0; row + 2 < m; row++) {
            for (int col = 0; col + 2 < n; col++) {
                if (isMagicSquare(grid, row, col)) {
                    ans++;
                }
            }
        }
        return ans;
    }

private:
    bool isMagicSquare(vector<vector<int>>& grid, int row, int col) {
        bool seen[10] = {false};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int num = grid[row + i][col + j];
                if (num < 1 || num > 9) return false;
                if (seen[num]) return false;
                seen[num] = true;
            }
        }

        // Check if diagonal sums are the same
        int diagonal1 =
            grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2];
        int diagonal2 =
            grid[row + 2][col] + grid[row + 1][col + 1] + grid[row][col + 2];

        if (diagonal1 != diagonal2) return false;

        // Check if all row sums are the same as the diagonal sums
        int row1 = grid[row][col] + grid[row][col + 1] + grid[row][col + 2];
        int row2 = grid[row + 1][col] + grid[row + 1][col + 1] +
                   grid[row + 1][col + 2];
        int row3 = grid[row + 2][col] + grid[row + 2][col + 1] +
                   grid[row + 2][col + 2];

        if (!(row1 == diagonal1 && row2 == diagonal1 && row3 == diagonal1)) {
            return false;
        }

        // Check if all column sums are the same as the diagonal sums
        int col1 = grid[row][col] + grid[row + 1][col] + grid[row + 2][col];
        int col2 = grid[row][col + 1] + grid[row + 1][col + 1] +
                   grid[row + 2][col + 1];
        int col3 = grid[row][col + 2] + grid[row + 1][col + 2] +
                   grid[row + 2][col + 2];

        if (!(col1 == diagonal1 && col2 == diagonal1 && col3 == diagonal1)) {
            return false;
        }

        return true;
    }
};