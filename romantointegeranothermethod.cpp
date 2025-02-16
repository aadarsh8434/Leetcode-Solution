#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class solution {
    public:
        int romanToInt(string s) {
            map<char,int>romanvalues;
            romanvalues['I']=1;
            romanvalues['V']=5;
            romanvalues['X']=10;
            romanvalues['L']=50;
            romanvalues['C']=100;
            romanvalues['D']=500;
            romanvalues['M']=1000;
            int result=0;
            for(int i=0;i<s.length()-1;i++)
            {
                if(romanvalues[s[i]]<romanvalues[s[i+1]]) {
                    result-=romanvalues[s[i]];
                }
                else {
                    result+=romanvalues[s[i]];
                }
            }
            result+=romanvalues[s[s.length()-1]];
            return result;
        }
};
         