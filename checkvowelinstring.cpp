#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int res = 0;
        int currentLength = 0;

        for (int i = 0; i < n; i++) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
                currentLength++;
                res = max(res, currentLength);
            } else {
                currentLength = 0;
            }
        }
        return res;   
    }
};

int main() {
    Solution sol;
    string word = "abciiidef";
    cout << "Length of longest vowel substring: " << sol.countVowelSubstrings(word) << endl;
    return 0;
}