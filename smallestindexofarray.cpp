#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        if (nums.empty()) {
            return -1;
        }
        int n = nums.size();
        int min = nums[0];
        int index = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] < min) {
                min = nums[i];
                index = i;
            }
        }
        return index;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 5, 6, 7, 8, 9};
    cout << s.smallestIndex(nums) << endl;
    return 0;
}