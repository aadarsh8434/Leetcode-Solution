
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int median(vector<vector<int>>&nums) {
        int n =nums.size();
        int m = nums[0].size();
        vector<int> a(n*m);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                a[i*m+j] = nums[i][j];
                }
                }
                sort(a.begin(),a.end());
                int mid = (n*m-1)/2;
                return a[mid];
                }
                };
                int main() {
                    solution s;
                    vector<vector<int>> nums = {{1,3,5},{2,6,9},{
                        3,6,9}};
                        cout<<s.median(nums)<<endl;
                        return 0;
                        
                }