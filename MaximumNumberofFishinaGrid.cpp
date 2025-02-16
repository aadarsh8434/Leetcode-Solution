
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
class solution {
    public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    dp[i][j] = 1 + max({(i > 0 ? dp[i
                    - 1][j] : 0), (j > 0 ? dp[i][j
                    - 1] : 0), (i > 0 && j > 0 ?
                    dp[i - 1][j - 1] : 0)});
                    }
                    }
                    }
                    int maxFish = 0;
                    for(int i = 0; i < n; i++) {
                        for(int j = 0; j < m; j++) {
                            maxFish = max(maxFish, dp[i][j]);
                        }
                    }
                    return maxFish;
    }
};