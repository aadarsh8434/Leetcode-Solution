
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        bool areAlmostEqual(string s1, string s2) {
            if(s1.length() != s2.length()) {
                return false;
            }
            int n = s1.length();
            for(int i = 0; i < n; i++) {
                if(s1[i] != s2[i]) {
                    if(i == 0) {
                        return false;
                    }
                    if(s1[i-1] == s2[i] && s1[i] == s
                    2[i-1]) {
                        continue;
                        }
                        else {
                            return false;
                        }
                }
            }
            return true;
        }
};
