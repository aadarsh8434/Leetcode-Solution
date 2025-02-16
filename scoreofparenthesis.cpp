#include<iostream>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class solution {
    public:
        int scoreOfParentheses(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);

        for (int i = 1; i < n; ++i) {
            if (s[i] == ')' && s[i - 1] == '(') {
                dp[i] = (i >= 2 ? dp[i - 2] : 0) + 1;
            } else if (s[i] == ')') {
                int j = i - 1, balance = 0;
                while (j >= 0) {
                    balance += (s[j] == '(' ? 1 : -1);
                    if (balance == 1) {
                        dp[i] = (j >= 1 ? dp[j - 1] : 0) + 2 * dp[i - 1];
                        break;
                    }
                    --j;
                }
            }
        }

        return dp[n - 1];
    }
};
int main() {
    solution s;
    string str = "()";
    cout<<s. scoreOfParentheses(str)<<endl;
    return 0;

}