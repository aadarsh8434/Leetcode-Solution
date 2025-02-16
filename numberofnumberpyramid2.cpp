#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int row=1;
    for(int i=1;i<=n;i++) {
        for(int k=n-i;k>0;k--) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
        }
}