#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {  
    public:
    void reverseOfArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        while(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};
int main() {
    Solution sol;  
    vector<int> arr = {4, 8, 9, 6, 3, 5};
    sol.reverseOfArray(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
