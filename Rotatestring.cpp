#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class solution {
    public:
     bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string s1=s;
        string s2=goal;
        int len=s.length();
        for(int i=0;i<len;i++) {
            s1=s1.substr(1)+s1[0];
            if(s1==goal) return true;
        }
        return false;
        }
};