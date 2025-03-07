#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> sieverHelp(int right) {
        vector<bool> isprime(right + 1, true);
        isprime[0] = false;
        isprime[1] = false;
        for (int i = 2; i * i <= right; i++) {
            if (isprime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isprime[j] = false;
                }
            }
        }
        return isprime;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> isprime = sieverHelp(right);
        vector<int> primes;
        
        for (int i = left; i <= right; i++) {
            if (isprime[i]) {
                primes.push_back(i);
            }
        }

        if (primes.size() < 2) return {-1, -1};

        int numDiff = INT_MAX;
        vector<int> result = {-1, -1};

        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < numDiff) {
                numDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    int left, right;
    cin >> left >> right;

    vector<int> result = sol.closestPrimes(left, right);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
