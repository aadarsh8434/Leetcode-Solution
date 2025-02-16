#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
class solution {
    public:
int minLength(string s) {
    int n=s.size();
    int i=0;
    int j=1;
    while(j<n) {
        else if((s[i]=='A' && s[j]=='B') || (s[i]=='C' && s[j]=='D'))  {
            i--; 
            }
            else {
                i++;
                s[i]==s[j];
            }
            j++;
    }
return i+1;
}

         
    };
   