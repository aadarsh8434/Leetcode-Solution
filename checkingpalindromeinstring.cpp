#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<map>
using namespace std;
class solution {
    public:
    string checkpalindrome(string str) {
        int n = str.length();
        for(int i=0;i<n;i++) {
            if(str[i]!=str[n-i-1]) {
                return "No";
            }
        }
        return "yes";
    }
};
int main() {
    solution s;
    string str= "radar";
    cout<<s.checkpalindrome(str)<<endl;
    return 0;
}
    