#include<iostream>
#include<stdio.h>
using namespace std;
bool issubset(int arr1[],int m, int arr2[],int n) {
    if(m>n) return false;
    for(int i=0;i<m;i++) {
        bool present=false;
        for(int j=0;j<n;j++) {
            if(arr1[i]==arr2[j]) {
                present=true;
                break;
            }
        }
        if(present==false) return false;
    }
    return true;
}
int main() {
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5,57};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    if(issubset(arr1,m,arr2,n)) cout<<"subset";
    else cout<<"not subset";
    return 0;

}