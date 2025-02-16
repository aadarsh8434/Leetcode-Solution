#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size();
        int m = grid[0].size();
        int total = n * m;

        unordered_map<int, int> frequency;
        int repeated = -1, missing = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                frequency[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= total; i++) {
            if (frequency[i] == 0) {
                missing = i;
            } else if (frequency[i] > 1) {
                repeated = i;
            }
        }

        return {missing, repeated};
    }
};