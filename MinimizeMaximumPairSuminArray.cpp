
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int minPairSum(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n = nums.size();
            int ans=0;
            for(int i=0;i<n;i++) {
                if(i>=n-i-1) break;
                ans = max(ans,nums[i]+nums[n-i-1]);
            }
            return ans;
        }
};
int main() {
    solution s;
    vector<int> nums = {3,5,2,3};
    cout<<s.minPairSum(nums)<<endl;
    return 0;
}