#include<iostream>
using namespace std;

bool isDivisor(int num) {
    if (num == 0 || num == 1) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int num = 28;

    if (isDivisor(num)) {
        cout << num << " has divisors other than 1 and itself." << endl;
    } else {
        cout << num << " is either 0, 1, or a prime number." << endl;
    }

    return 0;
}
