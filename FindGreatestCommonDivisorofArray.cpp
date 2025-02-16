#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int b = nums[nums.size() - 1];
        
        // Euclidean algorithm to find GCD
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        
        return a;
    }
};

int main() {
    solution s;
    vector<int> nums = {2, 5, 6, 9, 10};
    cout << s.findGCD(nums) << endl;  // Output should be 1
    return 0;
}