#include <iostream>
#include <string> // Case-sensitive header for std::string
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string res = ""; 
        for (char c : s) {
            if (c == '*') {
                if (!res.empty()) {
                    res.pop_back(); 
                }
            } else {
                res += c; 
            }
        }
        return res; 
    }
};

int main() {
    Solution s;
    string str = "leet**cod*e";
    cout << s.removeStars(str) << endl; // Should output: "lecoe"
    return 0;
}
