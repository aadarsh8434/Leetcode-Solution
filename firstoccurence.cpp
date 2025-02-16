#include<iostream>
#include<vector>
#include<string>
using namespace std;
class solution {
    public:
      int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int len = haystack.length();
        int nlen = needle.length();
        for(int i=0; i<len-nlen+1;i++) {
            if(haystack.substr(i,nlen)==needle) return i;
        }
        return -1;

        }
};