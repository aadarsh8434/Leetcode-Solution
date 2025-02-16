#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int n = num;
    int sum = 0;
    int digits = 0;

    while (n != 0) {
        n /= 10;
        digits++;
    }

    n = num;

    while (n != 0) {
        int r = n % 10;
        sum += pow(r, digits);
        n /= 10;
    }

    return sum == num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}