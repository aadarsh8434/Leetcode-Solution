#include<iostream>
#include<vector>
#include<stdio.h>
#include<set>
using namespace std;
class solution {
    public:
     char repeatedCharacter(string s) {
        set<char>st;
        for(int i=0;i<s.length();i++) {
         if(st.find(s[i])!=st.end()) {
            return s[i];
         }
         st.insert(s[i]);
        }
        return '\0';
     }
};
int main() {
    solution s;
    string ch="ascbcbc";
    cout<<s.repeatedCharacter(ch)<<endl;
    return 0;
}
