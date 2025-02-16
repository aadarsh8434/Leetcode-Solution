#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    int duplicateUnsorted(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            int index = abs(arr[i]);
            if(index - 1 >= n) continue;
            if(arr[index - 1] < 0) {
                return index;
            }
            arr[index - 1] = -arr[index - 1];
        }
        return -1;
    }
};
int main() {
    vector<int> arr = {1, 2, 3, 1, 3, 6, 8, 9};
    Solution sol;
    cout << sol.duplicateUnsorted(arr) << endl;
    return 0;
}
