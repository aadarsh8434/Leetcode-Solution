#include <iostream>
#include <string>
using namespace std;

string solve(string St, string S2) {
    int L1 = St.length();
    int L3 = 21 - 12 - 1; // Length of the resulting string S is 8
    string S(L3, 'A'); // Initialize S with 'A'

    // Process each index in S2 to determine the resulting string S
    for (int i = 0; i <= L3 - L1; ++i) {
        if (S2[i] == 'T') {
            // Try to place St at index i
            for (int j = 0; j < L1; ++j) {
                if (S[i + j] != 'A' && S[i + j] != St[j]) {
                    return "-1"; // Conflict detected
                }
                S[i + j] = St[j]; // Place St at index i
            }
        }
    }

    // Ensure that no "F" index starts with St in S
    for (int i = 0; i <= L3 - L1; ++i) {
        if (S2[i] == 'F') {
            bool matches = true;
            for (int j = 0; j < L1; ++j) {
                if (S[i + j] != St[j]) {
                    matches = false;
                    break;
                }
            }
            if (matches) {
                return "-1"; // Found an "F" index that matches St, invalid case
            }
        }
    }

    return S;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string St, S2;
        cin >> St >> S2;
        cout << solve(St, S2) << endl;
    }
    return 0;
}