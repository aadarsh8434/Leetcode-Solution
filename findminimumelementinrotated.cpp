#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumelement(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums[0];
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] < ans) {
                ans = nums[mid];
            }

            if (nums[mid] > nums[l]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << s.minimumelement(nums) << endl;
    return 0;
}