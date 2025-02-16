#include<iostream>
#include<stdio.h>
using namespace std;
float sumofap(float a,float d,int n) {
    float sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+a;
        a=a+d;

    }
    return sum;
}
int main() {
    float a=1.5,d=3;
    int n=5;
    cout<<"sum of ap is "<<sumofap(a,d,n)<<endl;

}