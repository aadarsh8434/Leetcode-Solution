#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
// bool checkPrime(int n) {
//  int cnt=0;
//  for(int i=1;i<=sqrt(n);i++) {
// if(n%i==0) {
// cnt=cnt+1;
// if(n/i!=i) {
//     cnt=cnt+1;
// }

// }
// }
// if(cnt==2) {
//     return true;
// }
// else {
//     return false;
// }

// }
// int main() {
//     int n=25;
//     bool isprime = checkPrime(n);
//     if(isprime) {
//         cout<<"the number is prime"<<endl;
//     }
//     else {
//         cout<<"the number is not prime"<<endl;

//     }
//     return 0;

// }
bool checkPrime(int n) {
    int cnt=0;
    for(int i=1;i<sqrt(n);i++) {
        if(n%i==0) {
            cnt=cnt+1;
        }
    }
    if(cnt==1) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int n=25;
    bool isprime = checkPrime(n);
    if(isprime) {
        cout<<"the number is prime"<<endl;
    }
    else {
        cout<<"the number is not prime"<<endl;
    }
    return 0;
}
   