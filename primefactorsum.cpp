#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int sumofprimefactor(int n) {
    int sum=0;
    for(int i=2;i*i<=n;i++) {
        while(n%i==0) {
            sum+=i;
            n/=i;

        }

    }
    if(n>1) {
        sum+=n;
    }
    return sum;

}
int main() {
    int n=25;
    cout<<"the sum of prime factors of"<<n<<"is:"<<sumofprimefactor(n)<<endl;
    return 0;

}