#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
        vector<int> getRow(int rowIndex) {
            vector<int> res(rowIndex+1,1);
            for(int i=1;i<res.size();i++) {
                for(int j=i;j>0;j--) {
                    res[j]=+res[j-1];
                }
            }
            return res;
            

                }
            };
}