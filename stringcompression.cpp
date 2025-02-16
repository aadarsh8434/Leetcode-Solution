#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;  
        int ansIndex = 0;  
        int n = chars.size();

        while (i < n) {
            char currentChar = chars[i];
            int count = 0;

            
            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }

           
            chars[ansIndex++] = currentChar;

            /
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[ansIndex++] = c;
                }
            }
        }

        return ansIndex;
    }
};

int main() {
    Solution solution;

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << "Original characters: ";
    for (char c : chars) {
        cout << c << " ";
    }
    cout << endl;

    int newLength = solution.compress(chars);

    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    cout << "New length: " << newLength << endl;

    return 0;
}
