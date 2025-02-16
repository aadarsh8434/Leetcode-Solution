#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    void maximumAndMinimum(vector<int>& nums) {
        if (nums.empty()) {
            cout << "Vector is empty." << endl;
            return;
        }

        int max = INT_MIN;
        int min = INT_MAX;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] < min) {
                min = nums[i];
            }
            sum += nums[i];
        }

        cout << "Maximum: " << max << endl;
        cout << "Minimum: " << min << endl;
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    s.maximumAndMinimum(nums);
    return 0;
}