#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    s.reverse(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}