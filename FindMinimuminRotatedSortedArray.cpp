#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<map>
using namespace std;
class solution {
    public:
     int findMin(vector<int>& nums) {
        int n = nums.size();
        int left =0, right = n-1;
        while(left<right) {
            int mid = left+ (right-left)/2;
            if(nums[mid]> nums[right]) {
                left = mid+1;
            }
            else {
                right = mid;
            }
        }
        return nums[left];
     }
};
            
  