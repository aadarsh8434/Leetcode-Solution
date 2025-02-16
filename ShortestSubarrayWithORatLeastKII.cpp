#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right =0;
        int minLen = n+1;
        while(right<n) {
            if(nums[right]>=k) {
                minLen = min(minLen,right-left+1);
                right++;
            }
            else {
                right++;
                if(nums[left]<=nums[right]) {
                    left++;
                }
                else {
                    left++;
                    while(left<n && nums[left]<=nums[right]) {
                        left++;
                    }
                }
            }
        }
        return minLen==n+1 ? -1:minLen;
    }
};
               

  