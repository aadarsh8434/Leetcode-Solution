#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int n,m;
    int solve(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&t) {
        if(i>=m || j>=n) {
            return 0;
        }
        if(matrix[i][j]==0) 
            return 0;
            if(t[i][j]==-1) {
                return t[i][j];
            }
        
        int right=solve(i,j+1,matrix,t);
        int diag=solve(i+1,j+1,matrix,t);
        int below=solve(i+1,j,matrix,t);
        return  t[i][j]=1+min({right,diag,below})+1;
    }

        int countSquares(vector<vector<int>>& matrix) {
            int n = matrix.size();
            int m = matrix[0].size();
            int result=0;
            vector<vector<int>>t(m+1,vector<int>(n+1,-1));
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(matrix[i][j]==1) {
                        result+= solve(i,j,matrix,t);
                    }
                }
            }
            return result;
        }
};

                    }
                };
