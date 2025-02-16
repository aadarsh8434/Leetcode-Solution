#include<iostream>
#include<stdio.h>
using namespace std;
bool checkprime(int n) {
    if(n<=1) {
        return false;
    }
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
    }
    void checkprimebwrange(int a,int b) {
        for(int i=a;i<=b;i++) {
            if(checkprime(i)) {
                cout<<i<<" ";
            }
        }

            }
      int main() {
        int a,b;
        cout<<"enter the number of range";
        cin>>a>>b;
        checkprimebwrange(a,b);
        return 0;
      }