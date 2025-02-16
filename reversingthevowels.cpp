#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceConsonants(string s) {
        string res = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                res += s[i];  
            } else {
                res += '#';  
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    string str;
    cin >> str;
    cout << sol.replaceConsonants(str) << endl;
    return 0;
}
