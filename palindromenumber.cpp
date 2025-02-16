#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool palindromeno(const string& str) {
        int i = 0;
        int j = str.length() - 1;
        while (i < j) {
            if (str[i] != str[j]) {
                return false; 
            }
            i++;
            j--;
        }
        return true; 
    }
};

int main() {
    Solution ob;
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << (ob.palindromeno(str) ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
