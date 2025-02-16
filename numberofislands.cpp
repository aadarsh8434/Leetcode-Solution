#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
     int numIslands(vector<vector<char>>& grid) {
        int count =0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
               if(grid[i][j]=='1') {
                dfs(grid,i,j);
                ++count;
               }
            }
            return count;
        }
        private:
        void dfs(vector<vector<grid>>&grid,int i,int j) {
            int n = grid.size();
            int m = grid[0].size();
            if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0') {
                return;
            }
            grid[i][j]=='0';
            dfs(grid, i + 1, j); 
            dfs(grid, i - 1, j); 
            dfs(grid, i, j + 1); 
            dfs(grid, i, j - 1); 
            }
     }
};

        
            