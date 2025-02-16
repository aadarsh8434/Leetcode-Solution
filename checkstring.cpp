
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    bool check(string s) {
        int n = s.size();
        int i=0, j=n-1;
        while(i<j) {
            if(s[i]!= s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
int main() {
    solution s;
    cout<<s.check("abcba")<<endl;
    cout<<s.check("abca")<<endl;
    return 0;
}