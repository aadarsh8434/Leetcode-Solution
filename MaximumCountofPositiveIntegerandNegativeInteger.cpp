#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        auto lambdaP = [](int num) { return num > 0; };
        auto lambdaN = [](int num) { return num < 0; };

        int countPositive = count_if(nums.begin(), nums.end(), lambdaP);
        int countNegative = count_if(nums.begin(), nums.end(), lambdaN);
        return max(countPositive, countNegative);
    }
};

int main() {
    Solution s;
    vector<int> nums = {-2, -1, -1, 1, 2, 3};
    cout << s.maximumCount(nums) << endl;
    return 0;
}

      