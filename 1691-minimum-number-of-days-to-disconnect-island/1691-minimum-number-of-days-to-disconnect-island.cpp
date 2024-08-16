class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& visited){
      if(i < 0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] != 1 || visited[i][j])return;
        visited[i][j] = true;
        dfs(grid, i+1,j,visited);
        dfs(grid, i-1,j,visited);
        dfs(grid, i,j+1,visited);
        dfs(grid, i,j-1,visited);
        
    }

    int countIsland(vector<vector<int>>& grid){
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size() ,false));
        int noOfIslands = 0;
        for(int i =0; i<grid.size(); ++i){
            for(int j =0; j < grid[0].size(); ++j){
                if(grid[i][j] == 1 && !visited[i][j]){
                    dfs(grid,i,j , visited);
                    noOfIslands++;
                }
            }
        }
        return noOfIslands;
    }
    int minDays(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty())return 0;
        int IntialCntOfIsland = countIsland(grid); 
        if(IntialCntOfIsland != 1)return 0;
        //try remove each land
        for(int i =0; i<grid.size(); ++i){
            for(int j =0; j < grid[0].size(); ++j){
                if(grid[i][j] == 0)continue;
                //temporary change
                grid[i][j] = 0;
                int newIslandCount = countIsland(grid);
                if(newIslandCount != 1)return 1;
                //revert change
                grid[i][j] = 1;

            }
        }
        return 2;
    }
};