#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int minOperations(vector<vector<int>>& grid, int x) {
       int m = grid.size();
       int n = grid[0].size();
       vector<int>vec;
       for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            vec.push_back(grid[j][i]);
        }
    }
    int L= vec.size();
    sort(begin(vec),end(vec));
    int target= vec[L/2];
    int result=0;
    for(int &num:vec) {
        if(num%x!=target%x) {
            return -1;
        }
        result += abs(target-num)/x;
    }
    return result;
}
};
int main() {
    solution s;
    vector<vector<int>> grid = {{2,4}, {6,8}};
    int x=2;
    cout << s.minOperations(grid, x) << endl;
    return 0;
}
   


    