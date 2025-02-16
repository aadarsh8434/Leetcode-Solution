#include<iostream>
#include<cmath>
using namespace std;
class solution {
    public:
    int fibonacciseries(int n) {
        if(n==0) 
        return 0;
        else if(n==1) 
        return 1;
      return fibonacciseries(n-1)+(n-2);
    }
};
    int main() {
        solution s;
        int n;
        cout<<"enter the number of terms of the series:";
        cin>>n;
        cout<<"The "<<n<<"th term in the fibonacci series is:"<<s.fibonacciseries(n)<<endl;
        return 0;

    }
