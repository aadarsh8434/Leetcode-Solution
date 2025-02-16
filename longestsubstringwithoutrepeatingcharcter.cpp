#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<char, int> visited;
            int n = s.length();
            int i = 0, j = 0, ans = 0;

            while (j < n) {
                if (visited.find(s[j]) == visited.end() || visited[s[j]] < i) {
                    visited[s[j]] = j;
                    ans = max(ans, j - i + 1);
                    j++;
                } else {
                    i = visited[s[j]] + 1;
                }
            }
            return ans;
        }
};

int main() {
    Solution s;
    string input;
    cin >> input;
    cout << s.lengthOfLongestSubstring(input) <<endl;
    return 0;
}