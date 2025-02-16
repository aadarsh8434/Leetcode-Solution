#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution {
public:
    void removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int j = 0; 

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        nums.resize(j + 1); 
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 9, 8, 5, 4, 6, 4};
    solution s;
    s.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
