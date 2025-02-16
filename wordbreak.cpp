#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        bool wordBreak(string s, vector<string>& wordDict) {
            vector<bool> dp(s.size() + 1, false);
            dp[0] = true;
            for (int i = 1; i <= s.size(); i++) {
                for (int j = 0; j < i; j++) {
                    if (dp[j] && find(wordDict.begin(), wordDict.end(), s.substr(j,
                    i - j)) != wordDict.end()) {
                        dp[i] = true;
                        break;
                    }
                }
            }
            return dp[s.size()];
        }           
};
int main() {
    solution s;
    string str = "applepenapple";
    vector<string> wordDict= {"apple","pen"};
    cout<< s.wordBreak(str, wordDict)<<endl;
    return 0;
}