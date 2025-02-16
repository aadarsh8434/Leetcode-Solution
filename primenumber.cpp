#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int primenumber(int num) {
    if(num ==1) return 0;
    for(int i=2;i<num;i++) {
        if(num%i == 0) return 0;
    }
    return 1;
}
int main() {
    int n;
    cout<<"enter a number :" ;
    cin>>n;
    if(primenumber(n)) {
        cout<<"this is a prime number";
    }
    else {
        cout<<"this is not prime number";
    }
    return 0;
}
  
