#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculateSum(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int gcd_val = nums[0];
        int lcm_val = nums[0];
        int prod = 1;

        for (int i = 0; i < n; i++) {
            gcd_val = __gcd(gcd_val, nums[i]); // Calculate GCD
            lcm_val = (lcm_val / __gcd(lcm_val, nums[i])) * nums[i]; // Calculate LCM
            prod *= nums[i]; // Calculate Product
        }

        return gcd_val + lcm_val + prod; // Return the sum
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {2, 3, 4};
    int result = sol.calculateSum(nums);
    cout << "Result: " << result << endl; // Output: Sum of GCD, LCM, and Product
    return 0;
}
