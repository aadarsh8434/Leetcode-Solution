#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    void leastFrequentLetter(const string& str) {
        unordered_map<char, int> mp;
        
        for (char c : str) {
            mp[c]++;
        }

        int minFreq = INT_MAX;

        for (const auto& it : mp) {
            if (it.second < minFreq) {
                minFreq = it.second;
            }
        }

        for (const auto& it : mp) {
            if (it.second == minFreq) {
                cout << "Least frequent letter: " << it.first << " with frequency: " << minFreq << endl;
            }
        }
    }
};

int main() {
    Solution s;
    s.leastFrequentLetter("abcacbdfgkh");
    return 0;
}
