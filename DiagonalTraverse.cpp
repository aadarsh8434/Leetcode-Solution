#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class solution {
    public:
     vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>res(m+n-1,0);
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                res[i+j]= mat[i][j];
            }
        }
        for(int i=0;i<m+n-1;i++) {
            if(i%2==0) {
                res[i] = mat[i/2][n-1-i/2];
            }
            else {
                res[i]= mat[m-1-(i/2)][n-1-i/2];
            }
        }
        return res;
     }
     };


            }
            }
        }


            }

        }
     };
