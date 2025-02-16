#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {8, 5, 9, 4, 6, 2, 4};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n / 2; i++) {
        cout << arr[i] << " ";
    }

    for(int i = n - 1; i >= n / 2; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
