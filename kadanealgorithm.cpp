#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int current_sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            current_sum = current_sum + nums[i];
            if(current_sum > max_sum) {
                max_sum = current_sum;
            }
            if(current_sum < 0) {
                current_sum = 0;
            }
        }
        return max_sum;
    }
};

int main() {
    solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << s.maxSubArray(nums) << endl;
    return 0;
}