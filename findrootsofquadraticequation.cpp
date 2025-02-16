#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
void root(int a,int b,int c) {
    int d = b*b-4*a*c;

    if(d<0) {
        cout<<"no real root"<<endl;
    }
    else if(d==0) {
        cout<<-b/(2*a)<<endl;
    }
    else {
        cout<<(-b-sqrt(d))/(2*a)<<endl;
        cout<<(-b+sqrt(d))/(2*a)<<endl;

    }
    };
    int main() {
        // solution s;
        root(1,-3,-2);
        return 0;
    }
 