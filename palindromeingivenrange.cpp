#include<iostream>
#include<vector>
using namespace std;
class palindrome {
    public:
    bool ispalindrome(int num) {
        int temp=num;
        int rev=0;
        while(temp!=0) {
            int rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;

        }
        return rev==num;
            }
};
            int main() {
                palindrome p;
                int arr[]={121,22,11,65};
                for(int i=0;i<4;i++) {
                    if(p.ispalindrome(arr[i])) {
                        cout<<arr[i]<<"palindrome number"<<endl;
                    }
                    else {
                        cout<<arr[i]<<"not a palindrome"<<endl;

                    }
                }
            }
