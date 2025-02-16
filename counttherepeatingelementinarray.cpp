#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;

class solution {
public:
    int countduplicatearray(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]);

            if (nums[index - 1] < 0) {
                count++;
            } else {
                nums[index - 1] = -nums[index - 1];
            }
        }

        return count;
    }
};

int main() {
    vector<int> nums = {1, 5, 5, 8, 9, 3, 4, 6, 9, 9};
    solution s;
    int result = s.countduplicatearray(nums);
    cout << "Count of duplicate elements: " << result << endl;
    return 0;
}
