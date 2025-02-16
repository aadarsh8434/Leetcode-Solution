
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int numSubseq(vector<int>& nums, int target) {
            int n = nums.size();
            int mod = 1e9+7;
            vector<int> pows(n,1);
            for(int i=1;i<n;i++) pows[i] = (pows[i-1]*2)%mod;
            sort(nums.begin(),nums.end());
            int l=0,r=n-1,ans=0;
            while(l<=r) {
                if(nums[l]+nums[r]>target) r--;
                else {
                    ans = (ans+pows[r-l])%mod;
                    l++;
                }
            }
            return ans;
        }
};
int main() {
    solution s;
    vector<int> nums= {3,4,6,8};
    int target =10;
    cout<<s.numSubseq(nums,target)<<endl;
    return 0;
}
  