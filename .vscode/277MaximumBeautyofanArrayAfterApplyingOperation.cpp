#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
      int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        //int n = nums.size();
        int left =0;
        int right =0;
        while(right<nums.size()) {
            if (nums[right] - nums[left] > 2 * k) {
                ++left;
            }
            ++right;
        }
      
      return left-right;
      }
};