#include <iostream>
#include <string>
#include <vector>
using namespace std;

string findLongestOddLengthString(const vector<string>& strings) {
    string longestOddString = "";
    
    for (const string& str : strings) {
        if (str.length() % 2 == 1 && str.length() > longestOddString.length()) {
            longestOddString = str;
        }
    }
    
    return longestOddString;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n; 
    vector<string> strings(n); 

    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> strings[i]; 
    }

    string result = findLongestOddLengthString(strings);

    if (result.empty()) {
        cout << "No odd-length strings found. Better luck next time!" << endl;
    } else {
        cout << "The longest odd-length string is: " << result << endl;
    }

    return 0; 
}