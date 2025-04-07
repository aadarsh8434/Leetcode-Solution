#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(int i: nums) sum+=i;
        if(sum%2!=0) return false;
        int target = sum/2;
        vector<bool> dp(10001, false);
        dp[0] = true;
        for(int i: nums) {
            for(int j=target; j>=i; j--) {
                dp[j] = dp[j] || dp[j-i];
                }
                }
                return dp[target];
            }
        };
int main() {
    solution s;
    vector<int> nums = {1,5,11,5};
    cout<<s.canPartition(nums)<<endl;
    return 0;
}