
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    string smallestNumber(string pattern) {
        string res;
        int n = pattern.size();
        stack<int>s;
        for(int i=0;i<=n;i++) {
            s.push(i+1);
            if(i==n || pattern[i]=='I') {
                while(!s.empty()) {
                    res+=to_string(s.top());
                    s.pop();
                }
            }
        }
        return res;
    }
};
int main() {
    solution s;
    cout<<s.smallestNumber("IDID")<<endl;
    return 0;
}
      