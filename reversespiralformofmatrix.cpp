#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class solution {
    public:
        vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
            vector<int> ans;
            int top=0,bottom= R-1,left=0,right=C-1;
            while(top<=bottom && left<=right) {
                for(int i=right;i>left;i--) {
                    ans.push_back(a[top][i]);
                }
                top++;
                for(int i=top;i<=bottom;i++) {
                    ans.push_back(a[i][left]);
                }
                left++;
                if(top<=bottom) {
                    for(int i=top;i<=bottom;i++) {
                        ans.push_back(a[i][right]);
                    }
                    right--;
                }
                if(left<=right) {
                    for(int i=right;i>left;i--) {
                        ans.push_back(a[bottom][i]);
                    }
                    bottom--;
                }
            }
            return ans;
        }
};
       