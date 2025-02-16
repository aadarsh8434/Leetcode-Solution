#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {1, 2, 23, 45, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int result = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = nums[i] * nums[j];
            if (product > result) {
                result = product;
            }
        }
    }
    
    cout << "Maximum product of two numbers is: " << result << endl;

    return 0;
}
