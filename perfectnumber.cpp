#include <iostream>
using namespace std;

class Solution {
public:
    bool perfectnumber(int n) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i; 
            }
        }
        return sum == n; 
    }
};

int main() {
    Solution ob;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (ob.perfectnumber(n)) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }

    return 0;
}
