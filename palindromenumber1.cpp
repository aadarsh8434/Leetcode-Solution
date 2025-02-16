#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int palindrome(int num) {
    int reversed=0;
    int original=num;
    while(num!=0) {
        int remainder =num%10;
        reversed = reversed*10+remainder;
        num/=10;
    }
    return (original==reversed)?1:0;
}
int main() {
    int n=125;
    if(palindrome(n)) {
        cout<<"number is palindrome"<<endl;
    }
    else {
        cout<<"number is not palindrome"<<endl;
    }
    return 0;
    };
 
