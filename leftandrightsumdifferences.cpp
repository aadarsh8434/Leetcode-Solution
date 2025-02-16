#include <iostream>
#include <vector>
#include <numeric> // For accumulate

using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        
        for (int i = 0; i < n; i++) {
            res[i] = abs(leftSum - (totalSum - leftSum - nums[i]));
            leftSum += nums[i];
        }
        
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    
    vector<int> result = s.leftRightDifference(nums);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
