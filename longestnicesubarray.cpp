#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i;j<n;j++){
                if((nums[j]&(nums[j]^count))!=0)count|=nums[j];
                else count=0;
                ans=max(ans,__builtin_popcount(count));
                }
                }
                return ans;
            }
        };
        int main() {
            solution s;
            vector<int> v = {1, 1, 2, 3, 2};
            cout << s.longestNiceSubarray(v) << endl;
            return 0;
        }