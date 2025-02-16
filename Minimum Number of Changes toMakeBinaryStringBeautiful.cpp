#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
     int minChanges(string s) {
        int n = s.size();
        int count=0;
        for(int i=0;i<n;i++) {

            if(s[i]=='1') {
                count++;
            }
        }
        
        return n-count;
     }
     };

   