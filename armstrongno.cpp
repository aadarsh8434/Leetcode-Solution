#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n;
    while(temp != 0) {
        int r = temp % 10;
        sum = sum + pow(r, 3); 
        temp = temp / 10;
    }
    return sum == n;
}

int main() {
    int n = 148; 
    if(isArmstrong(n)) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }
    return 0;
}
