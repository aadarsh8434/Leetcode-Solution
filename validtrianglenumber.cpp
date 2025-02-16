
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int sum=0, ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int temp = (sum*(sum+1))/2;
            if(temp>nums[i]*n) {
                ans = i+1;
                break;
                }
                }
                return ans;
                }
                };
      