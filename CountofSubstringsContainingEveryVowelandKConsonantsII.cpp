#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        int vowelsMask[128] = {};  
        vowelsMask['a'] = vowelsMask['e'] = vowelsMask['i'] = vowelsMask['o'] = vowelsMask['u'] = 1;

        long long result = 0;
        int currentK = 0, vowelCount = 0, extraLeft = 0, left = 0;
        unordered_map<char, int> vowelFreq;

        for (int right = 0; right < word.length(); right++) {
            char rightChar = word[right];
            if (vowelsMask[rightChar]) {
                if (++vowelFreq[rightChar] == 1) vowelCount++;
            } else {
                currentK++;  
            }
            while (currentK > k) {
                char leftChar = word[left++];
                if (vowelsMask[leftChar]) {
                    if (--vowelFreq[leftChar] == 0) vowelCount--;
                } else {
                    currentK--;
                }
                extraLeft = 0;
            }
            while (vowelCount == 5 && currentK == k && vowelFreq[word[left]] > 1) {
                extraLeft++;
                vowelFreq[word[left++]]--;
            }

            if (currentK == k && vowelCount == 5) {
                result += (1 + extraLeft);
            }
        }

        return result;
    }
};

int main() {
    Solution s;
    cout << s.countOfSubstrings("aeiobcuaeiou", 2) << endl;  
    return 0;
}
