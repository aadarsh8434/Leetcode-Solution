
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
       string removeCharacters(string& s) {
        string  res="";
        for(int i=0;i<s.size();i++) {
            if(s[i]!='a' && s[i]!='b') {
                res+=s[i];
            }
        }
        return res;
       }
};
int main() {
    solution s;
    string str= "abca";
    cout<<s.removeCharacters(str)<<endl;
    return 0;
}
