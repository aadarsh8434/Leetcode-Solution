#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<(1<<n);i++){
            int xorsum=0;
            for(int j=0;j<n;j++) {
                if((i & (1<<j)) != 0) {
                    xorsum ^= nums[j];
                }
            }
            ans += xorsum;
        }
        return ans;
    }
};
int main() {
    solution s;
    vector<int> nums = {1,3};
    cout << s.subsetXORSum(nums) << endl;
    return 0;
}