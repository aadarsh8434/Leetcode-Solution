#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

class Solution {
public:
    int perfectSquare(int num) {
        int low = 1, high = num, ans = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (mid * mid == num) {
                ans = mid;
                break; 
            }
            else if (mid * mid < num) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans; 
    }
};

int main() {
    Solution s;
    int num1 = 5;
    cout << "The largest integer whose square is less than or equal to " << num1 << " is: " << s.perfectSquare(num1) << endl;
    return 0;
}