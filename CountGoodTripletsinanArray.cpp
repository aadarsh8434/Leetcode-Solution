#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> indexInNums2(n);
        for (int i = 0; i < n; ++i) {
            indexInNums2[nums2[i]] = i;
        }

        vector<int> mapped(n);
        for (int i = 0; i < n; ++i) {
            mapped[i] = indexInNums2[nums1[i]];
        }

        vector<int> bit(n + 1, 0);

        auto update = [&](int i) {
            for (++i; i <= n; i += i & -i) bit[i]++;
        };

        auto query = [&](int i) {
            int res = 0;
            for (++i; i > 0; i -= i & -i) res += bit[i];
            return res;
        };

        vector<int> leftSmaller(n), rightGreater(n);

        for (int i = 0; i < n; ++i) {
            leftSmaller[i] = query(mapped[i] - 1);
            update(mapped[i]);
        }

        fill(bit.begin(), bit.end(), 0);

        for (int i = n - 1; i >= 0; --i) {
            rightGreater[i] = query(n - 1) - query(mapped[i]);
            update(mapped[i]);
        }

        long long res = 0;
        for (int i = 0; i < n; ++i) {
            res += (long long)leftSmaller[i] * rightGreater[i];
        }

        return res;
    }
};

int main() {
    vector<int> nums1 = {2, 0, 1, 3};
    vector<int> nums2 = {0, 1, 2, 3};

    Solution sol;
    int result = sol.goodTriplets(nums1, nums2);

    cout << "Number of good triplets: " << result << endl;

    return 0;
}
