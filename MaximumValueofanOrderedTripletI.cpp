#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    long long maximumTripletValue(vector<int>& nums) {
       int n = nums.size();
      if(n<3) return 0;
      vector<int>maxprefix(n,0), maxsuffix(n,0);
      maxprefix[0]= nums[0];
      for(int i=1;i<n;i++) 
        maxprefix[i] = max(maxprefix[i-1], nums[i]);
        maxsuffix[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) 
            maxsuffix[i] = max(maxsuffix[i+1], nums[i]);
            long long maxTriplet=0;
            for(int j=1;j<n-1;j++) {
                long long leftmax = maxprefix[j-1];
                long long rightmax = maxsuffix[j+1];
                if(leftmax>nums[j]) {
                    maxTriplet = max(maxTriplet,(leftmax-nums[j])*rightmax);
                }
            }
            return maxTriplet;
        }
    };
    int main() {
        solution s;
        vector<int> nums = {12,6,1,2,7};
        cout<<s.maximumTripletValue(nums)<<endl;
        return 0;
    }