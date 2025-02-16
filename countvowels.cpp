#include <iostream>
#include <vector>
#include <string>
#include <unordered_set> // Include this header for unordered_set
using namespace std;

class Solution {
public:
    long long countVowels(string word) {
        long long ans = 0;
        long long n = word.size();
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (long long i = 0; i < n; i++) {
            if (vowels.count(word[i])) {
                ans += (i + 1) * (n - i);
            }
        }

        return ans;
    }
};

int main() {
    Solution s; 
    string word = "abdfecsji";
    cout << s.countVowels(word) << endl;
    return 0;
}