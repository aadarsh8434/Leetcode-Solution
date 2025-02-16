#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class solution {
public:
    int duplicatearray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            // Check if the element is already in the map
            if (mp.find(nums[i]) != mp.end()) {
                return nums[i];  // Return the first duplicate element
            }
            mp[nums[i]]++;  // Increment frequency
        }
        return -1;  // Return -1 if no duplicates are found
    }
};

int main() {
    solution s;
    vector<int> nums = {1, 2, 4, 4, 5, 5, 6, 6, 8, 2};
    cout << s.duplicatearray(nums) << endl;  // This will print the first duplicate element
}
