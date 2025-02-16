#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class solution {
    public:
    vector<int> downwardDiagonal(int N, vector<vector<int>> A) {
        vector<int> ans( 2*N-1,0);
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                ans[i+j]+= A[i][j];
            }
        }
        return ans;
    }
};
            }
        }
    }
}