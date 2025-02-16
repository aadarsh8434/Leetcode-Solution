
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    bool isBinary(string& s) {
        for(int i=0;i<s.size();i++) {
            if(s[i]!='0' && s[i]!='1') {
                return false;
            }
        }
        return true;
    }
};
int main() {
    solution s;
    string str= "10101";
    cout<<s.isBinary(str)<<endl;
    return 0;
}