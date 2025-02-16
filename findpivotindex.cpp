#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
      int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++) {
            sum+=nums[i];
        }
        int sum2=0;
        for(int i=0;i<n;i++) {
            if(sum2==sum-sum2-nums[i]) {
                return i;
            }
            sum2+=nums[i];
        }
        return -1;
      }
};
int main() {
    solution s;
    vector<int>nums={1,2,3,4,5};
    cout<<s.pivotIndex(nums)<<endl;
    
}