#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        if (x < 2)
            return x;
        int l = 1, r = x / 2, ans;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x) {
                ans = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    int x;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> x;

    int result = solution.mySqrt(x);
    std::cout << "The integer square root of " << x << " is: " << result << std::endl;

    return 0;
}
