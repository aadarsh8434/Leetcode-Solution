#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
     long long minimumSteps(string s) {
        int n = s.size();
        long long swap=0;
        int black=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='0') {
                swap+=black;
            }
            else {
                black++;
            }
            }
            return swap;    
            }
            };
   