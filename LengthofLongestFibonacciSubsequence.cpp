
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> index;
        for (int i = 0; i < n; i++) {
            index[arr[i]] = i;
        }

        vector<vector<int>> dp(n, vector<int>(n, 2));
        int maxLength = 0;

        for (int j = 1; j < n; j++) {
            for (int i = 0; i < j; i++) {
                int prev = arr[j] - arr[i];
                if (prev < arr[i] && index.find(prev) != index.end()) {
                    int k = index[prev];
                    dp[i][j] = dp[k][i] + 1;
                    maxLength = max(maxLength, dp[i][j]);
                }
            }
        }

        return (maxLength >= 3) ? maxLength : 0;
    }
};
int main() {
    solution s;
    vector<int> arr = {1,2,3,4,5,6,7,8};
    cout<<s.lenLongestFibSubseq(arr)<<endl;
    return 0;
}