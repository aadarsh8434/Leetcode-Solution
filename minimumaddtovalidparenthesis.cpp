#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int size = 0;
        int open = 0;

        for(char &ch : s) {
            if(ch == '(') {
                size++;
            } else if(size > 0) {
                size--;
            } else {
                open++;
            }
        }

        return open + size;
    }
};

int main() {
    Solution sol;
    string s = "())(()";
    cout << "Minimum additions to make the parentheses valid: " << sol.minAddToMakeValid(s) << endl;
    return 0;
}
