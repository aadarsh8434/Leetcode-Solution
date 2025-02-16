#include<iostream>
using namespace std;
int main() {
    cout<<"Enter the height: ";
    int n;
    cin>> n;
    // int rows;
    // cout<<"enter the rows";
    // cin>>rows;
    int x = n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            cout<<" ";
        }
        for(int k=i;k<n;k++) {
            cout<<"*";
        }
        x--;
        cout<<endl;
    }
    return 0;
        }
   