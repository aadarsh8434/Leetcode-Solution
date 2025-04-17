#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int countPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int result = 0;

        unordered_map<int, vector<int>> indicesMap;
        for (int i = 0; i < n; i++) {
            indicesMap[nums[i]].push_back(i);
        }

        unordered_set<int> div;
        for (int f = 1; f * f <= k; f++) {
            if (k % f == 0) {
                div.insert(f);
                div.insert(k / f);
            }
        }

        for (auto& [num, indices] : indicesMap) {
            unordered_map<int, int> factorsMap;
            for (int i : indices) {
                int GCD = gcd(i, k);
                int required = k / GCD;

                result += factorsMap[required];

                for (int f : div) {
                    if (GCD % f == 0) {
                        factorsMap[f]++;
                    }
                }
            }
        }

        return result;
    }
};
int main() {
    solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k=2;
    cout << s.countPairs(nums, k) << endl;
    return 0;
}