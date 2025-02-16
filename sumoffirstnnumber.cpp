#include<iostream>
#include<stdio.h>
using namespace std;
void solve(int num) {
    int sum=0;
    for(int i=1;i<num;i++) {
        sum+=i;
    }
   cout<<"The sum of the first "<<num<<" numbers is: "<<sum<<endl;
}
int main() {
    solve(5);
    solve(6);
}