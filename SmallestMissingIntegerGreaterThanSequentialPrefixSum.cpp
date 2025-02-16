#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool contains(vector<int>&arr, int value) {
        for (auto num:arr) {
            if (num == value)
                return true;
        }
        return false;
    }

    int missingInteger(vector<int>& arr) {
        int pss = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1] + 1) {
                pss += arr[i];
            } else {
                break;
            }
        }
        int missingInt = pss;
        while (contains(arr, missingInt)) {
            missingInt++;
        }
        return missingInt;
    }
};

int main() {
    Solution s;
    vector<int> arr = {3, 4, 5, 1, 12, 14, 13};
    cout << "Smallest Missing Integer: " << s.missingInteger(arr) << endl;
    return 0;
}
