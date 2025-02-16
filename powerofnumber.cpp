#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int x=5,n=3;
    int ans=1;
    for(int i=1;i<=n;i++) {
        ans=ans*x;

    }
    cout<<"the raised power"<<n<<"is"<<ans;
    cout<<endl;
    return 0;

}

