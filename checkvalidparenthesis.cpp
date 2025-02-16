#include<iostream>
#include<vector>
#include<stdio.h>
#include<string>
using namespace std;
class solution {
    public:
        bool canBeValid(string s, string locked) {
            int n=s.size();
            if(n%2!=0) return false;
            int count;
            for(int i=0;i<n;i++) {
                if(s[i]=='(' || locked[i]=='0') count++;
                else if(s[i]=='(')count--;

                else if(s[i]==')' ) {
                    if(count<0) return false;
                    count--;
                }
                else count++;
            }
            return count==0;
            for(int i=n-1;i>=0;i++) {
                if(s[i]==')'|| locked[i]==0)count++;
                else if(s[i]==')')count--;

            }
            if(count<0)return false;

                }
               return true;

            };
      
        
