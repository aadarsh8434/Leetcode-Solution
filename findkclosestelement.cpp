#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - k;
        
        // Binary search for the best starting index
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (x - arr[mid] > arr[mid + k] - x)
                left = mid + 1;
            else
                right = mid;
        }
        
        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};
int main() {
    Solution s;
    vector<int> arr = {1,2,3,4,5};
    int k =4;
    int x=3;
    vector<int> result = s.findClosestElements(arr, k, x);
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1)
        cout << ", ";
        }
        cout << "]";
        return 0;


}