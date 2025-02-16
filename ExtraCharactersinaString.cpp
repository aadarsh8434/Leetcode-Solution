#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <climits> 
using namespace std;
class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0; 
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i - 1] + 1; 
            for (int len = 1; len <= i; ++len) {
                if (dict.count(s.substr(i - len, len))) {
                    dp[i] = min(dp[i], dp[i - len]);
                }
            }
        }
        return dp[n];
    }
};
int main() {
    string s = "applepenapple";
    vector<string> dictionary = {"apple", "pen"};
    Solution solution;
    cout << solution.minExtraChar(s, dictionary) << endl;
    return 0;
}
