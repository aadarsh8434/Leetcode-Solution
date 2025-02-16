#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int maximumLength(string s) {
        int n = s.size();
        int ans=0;
        int i=0,j=0;
        while(i<n) {
            if(s[i]== s[j]) {
                j++;
                i++;
            }
            else {
                j=0;
                i++;
            }
            ans = max(ans,j);
        }
        return ans;
    }
};

     