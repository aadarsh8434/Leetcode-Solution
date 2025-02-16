#include<iostream>
#include<vector>
using namespace std;
bool ispalindrome(int num) {
    int temp =num, rev=0;
    while(temp!=0) {
        int rem = temp%10;
        rev = rev*10 + rem;
        temp/=10;
    }
    return (rev==num);

}
int main() {
    int num=123321;
    if(ispalindrome(num)==1) {
        cout<<"the number is palindrome";
    }
    else {
        cout<<"the number is not palindrome";
    }
    }