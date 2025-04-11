#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int count = 0;
            for (int i = low; i <= high; i++) {
                string s = to_string(i);
                if (s.size() % 2 == 0 && 
                accumulate(s.begin(), s.begin() + s.size()/2, 0) ==
                accumulate(s.begin() + s.size()/2, s.end(), 0))
                    count++;
            }
            return count;
        }
    };
    int main() {
        Solution s;
        cout << s.countSymmetricIntegers(1, 100) << endl;
        return 0;
    }