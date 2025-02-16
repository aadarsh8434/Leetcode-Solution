#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
      int maximumDifference(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]>max) {
                max = nums[i];
            }
            if(nums[i]<min) {
                min = nums[i];
            }
            if(max-min>ans) {
                ans = max-min;
            }
        }
        return ans;
      }
};

  