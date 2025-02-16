#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int i = 0;
        for (const string& word : words) {
            if (i + word.size() <= s.size() && s.substr(i, word.size()) == word) {
                i += word.size();
                if (i == s.size()) {
                    return true; // Entire string matched
                }
            } else {
                return false;
            }
        }
        return false;
    }
};
