#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
class solution {
    public:
       int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n+1)/2;
        int res=0;
        for(int i=0;i<n;i++) {
            res += nums[i];
        }
        return sum - res;
       }
};
int main() {
    solution s;
    vector<int>nums ={3,0,1};
    cout<<s.missingNumber(nums)<<endl;

}
   