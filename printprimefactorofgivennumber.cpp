#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
bool checkprime(int n) {
    if(n<=1) {
        int cnt=0;
        for(int i=1;i<=sqrt(n);i++) {
            if(n%i==0) {
                cnt++;
                if(n/i!=i) {
                    cnt=cnt+1;
                }
            }
        }
        if(cnt==2) {
            return true;
        }
        else {
            return false;
        }      
}
vector<int>getfactor(int n) {
    vector<int>ans;
    for(int i=1;i<sqrt(n);i++) {
        if(n%9i==0) {
            ans.push_back(i);
            ans.push_back(n/i);
            break:
        }
    }
    
        }
    }
}
