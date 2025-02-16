#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
class solution {
    public:
    int twosumlessthank(vector<int>&nums,int k) {
        int n= nums.size();
        int left=0,right=n-1;
        while(left<right) {
            int sum= nums[left]+nums[right];
            if(sum<k) {
                left++;
            }
            else if(sum>k) {
                right--;
            }
            else {
                return left;
            }
        }
        return -1;
    }
};
int main() {
    solution s;
    vector<int>nums = {1,2,5,3,6,8};
    int k = 8;
    int index = s.twosumlessthank(nums,k);
    cout<<"index is "<< index<<endl;
    return 0;
}
       