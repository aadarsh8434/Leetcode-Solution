#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool allDigitsWithinLimit(long long num, int limit) {
            while (num > 0) {
                int digit = num % 10;
                if (digit > limit)
                    return false;
                num /= 10;
            }
            return true;
        }
    
        long long numberOfPowerfulInt(long long start, long long finish, int limit,string s) {
            long long count = 0;
            int len = s.length();
    
            for (long long i = start; i <= finish; ++i) {
                string numStr = to_string(i);
    
                if (numStr.length() >= len &&
                    numStr.substr(numStr.length() - len) == s) {
                    if (allDigitsWithinLimit(i, limit)) {
                        count++;
                    }
                }
            }
            return count;
        }
    };
    int main() {
        Solution s;
        cout << s.numberOfPowerfulInt(15, 215, 6,"10");
        return 0;
    }