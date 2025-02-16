#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
void getmedian(int arr[],int n) {
    sort(arr,arr+n);
    if(n%2==0) {
        int median1 = arr[n/2-1];
        int median2 = arr[n/2];
        cout<<((median1+median2)/2.0)<<endl;

    }
    else {
        cout<<arr[n/2]<<endl;

    }

}
int main() {
    int arr[]={1,2,3,4,5,6};
    int n=6;
    getmedian(arr,n);
    return 0;

}