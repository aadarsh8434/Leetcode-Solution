#include<iostream>
#include<stdio.h>
using namespace std;
class solution {
    public:
    int gcd(int a,int b) {
        
        while(a!=b) {
            if(a>b) {
                a=a-b;
            }
            else {
                b=b-a;
            }
            return b;
            }
    }
    };
    int main() {
        int a,b;
        cin>>a>>b;
         solution ob;
        cout<<ob.gcd(a,b)<<endl;
        // int ans=ob.gcd(a,b);
        // ans=(a*b)/ans;
        // cout<<ans;
    }
