
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
            int n = mat.size();
            int m = mat[0].size();
            int maxOnes=0, row=0;
            for(int i=0;i<n;i++) {
                int count=0;
                for(int j=0;j<m;j++) {
                    if(mat[i][j]==1) {
                        count++;
                    }
                }
                if(count>maxOnes) {
                    maxOnes = count;
                    row=i;
                }
            }
            return {row,maxOnes};
        }
};
int main() {
    solution s;
    vector<vector<int>> mat = {{0, 1}, {1, 0}};
    vector<int> result = s.rowAndMaximumOnes(mat);

    cout << "Row with maximum 1s: " << result[0] << endl;
    cout << "Number of 1s: " << result[1] << endl;

    return 0;
}           