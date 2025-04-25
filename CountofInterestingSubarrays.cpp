#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        vector<int> arr;
        for (int num : nums) {
            arr.push_back(num % modulo == k ? 1 : 0);
        }

        unordered_map<int, int> cnt;
        cnt[0] = 1;

        int ans = 0;
        int s = 0;

        for (int x : arr) {
            s = (s + x) % modulo;
            int target = (s - k + modulo) % modulo;
            ans += cnt[target];
            cnt[s]++;
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 2, 4};
    int modulo = 2, k = 1;

    cout << s.countInterestingSubarrays(nums, modulo, k) << endl;
    return 0;
}
