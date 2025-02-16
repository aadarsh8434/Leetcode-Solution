#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
    float sumofgpseries(float a,float r,float n) {
        float sum=0;
        for(int i=0;i<n;i++) {
            sum=sum+a;
            a=a*r;
        
        }
        return sum;
    }
int main() {
    float a=2;
    float r=3.5;
    float n=5;
    cout<<"the sum of gp series"<<sumofgpseries(a,r,n);
    return 0;
}




 
