#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
     int waysToSplitArray(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            }
            int left = 0;
            int right = 0;
            int count = 0;
            for (int i = 0; i < nums.size(); i++) {
                right += nums[i];
                if (left == right) {
                    count++;
                    left = right;
                    }
                    }
                    return count;
     }
};