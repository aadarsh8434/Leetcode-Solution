
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    string removevowel(string s) {
        string res="";
        for(int i=0;i<s.length();i++) {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') { 
                res+=s[i];
            }
        }
        return res;
    }
};
int main() {
    solution s;
    string str;
    cin>>str;
    cout<<s.removevowel(str)<<endl;
    return 0;
}