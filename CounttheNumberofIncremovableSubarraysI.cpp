#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
        int incremovableSubarrayCount(vector<int>& nums) {
            int count =0;
            int n = nums.size();
            int i=0;
            while (i < n) {
            int j = i + 1;
            while (j < n && nums[j] - nums[j - 1] == 1) {
                j++;
            }
            int length = j - i;
            count += (length * (length - 1)) / 2; 
            i = j; 
        }

        return count;
    }
};
              