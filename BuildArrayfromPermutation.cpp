#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<int> buildArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n);
        for(int i=0;i<n; i++) {
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};
int main() {
    solution s;
    vector<int> nums= {0,2,1,5,3,4};
    vector<int> ans=s.buildArray(nums);
    for(int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}