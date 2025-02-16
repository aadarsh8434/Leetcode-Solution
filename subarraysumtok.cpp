#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++) {
            int sum=0;
            for(int j=i;j<n;j++) {
                sum+=nums[j];
                if(sum==k) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
int main() {
    solution s;
    vector<int>nums = {4,8,9,6,3};
    int k = 10;
    cout<<s.subarraySum(nums,k)<<endl;
    return 0;
}