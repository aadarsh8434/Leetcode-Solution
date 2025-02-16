
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     vector <int> count (string s) {
        int count=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]== s[i+1]) {
                count++;
            }
        }
        return {count};
     }
};
 