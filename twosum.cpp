#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};  // Example input
    int target = 9;
    
    vector<int> result = s.twoSum(nums, target);  // Call the twoSum function
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    
    return 0;
}
