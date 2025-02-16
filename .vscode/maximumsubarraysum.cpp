#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class solution {
    public:
     int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int current_sum = 0;
        for(int i=0;i<nums.size();i++) {
            current_sum = current_sum + nums[i];
            if(current_sum > max_sum) {
                max_sum = current_sum;
            }
            if(current_sum < 0) {
                current_sum =0;
            }
        }
        return max_sum;
     }
};
int main() {
    solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = s.maxSubArray(nums);
    cout<<result<<endl;
    return 0;
}