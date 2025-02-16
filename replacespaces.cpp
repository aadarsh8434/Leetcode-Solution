#include<bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str){
    string res="";
    for(int i=0;i<str.length();i++) {
        if(str[i]==' ') {
            res += "";
        }
        else {
            res += str[i];
        }
    }
    return res;
}
int main() {
    string str = "MR john smith";
    cout<<replaceSpaces(str);
    return 0;
}
