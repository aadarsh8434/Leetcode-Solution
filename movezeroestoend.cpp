#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
     void pushZerosToEnd(vector<int>& arr) {
      int n = arr.size();
    int nonZeroIndex = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
    }
};
int main() {
    solution s;
    vector<int> arr = {0,5,3,8,9,6,0,8};
    s.pushZerosToEnd(arr);
    cout << "Array after pushing zeros to end: ";
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " ";
        }
        return 0;

}
 