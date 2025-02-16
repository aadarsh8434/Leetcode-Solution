#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        
        unordered_set<int> leftSet, rightSet(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            leftSet.insert(nums[i]);
            rightSet.erase(nums[i]);
            res[i] = leftSet.size() - rightSet.size();
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-3, -1, 1, 3, 5};
    
    vector<int> result = s.distinctDifferenceArray(nums);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
