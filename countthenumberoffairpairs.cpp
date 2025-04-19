#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            long long ans = 0;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++) {
                int j = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
                int k = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin();
                ans += k - j;
            }
            
            return ans;
        }
    };
int main() {
Solution s;
vector<int> nums = {1, 2, 3, 4, 5};
cout << s.countFairPairs(nums, 3, 7) << endl;
return 0;

}    