#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class solution {
    public:
        int deleteGreatestValue(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = grid[0].size();
            int ans=0;
            for(int i=0;i<m;i++){
                sort(grid[i].begin(),grid[i].end());
                int max_val = grid[i][n-1];
                int count = 0;
                for(int j=n-1;j>=0;j--){
                    if(grid[i][j]==max_val){
                        count++;
                    }
                    else{
                        break;
                    }
                    ans = max(ans,count*max_val);
                }
            }
            return ans;
        }
};