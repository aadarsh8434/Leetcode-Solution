#include<iostream>
#include<vector>


class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int left = 0, right = n - 1;

        // Find the longest non-decreasing prefix
        while (left + 1 < n && arr[left] <= arr[left + 1]) {
            left++;
        }
        if (left == n - 1) return 0; // Already sorted

        // Find the longest non-decreasing suffix
        while (right > 0 && arr[right - 1] <= arr[right]) {
            right--;
        }

        // Case 1: Remove all elements between left and right
        int ans = min(n - left - 1, right);

        // Case 2: Merge prefix and suffix
        int i = 0, j = right;
        while (i <= left && j < n) {
            if (arr[i] <= arr[j]) {
                ans = min(ans, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return ans;
    }
};
int main() {
    Solution s;
    vector<int> arr = {}
}