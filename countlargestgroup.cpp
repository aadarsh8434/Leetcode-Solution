#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int countLargestGroup(int n) {
        vector<int> groupCount(37, 0);
        for(int i = 1; i <= n; ++i) {
            int sumOfDigits = 0, num = i; while (num > 0) { sumOfDigits += num % 10; num /= 10; } groupCount[sumOfDigits]++;
        }
        int maxCount = *max_element(groupCount.begin(), groupCount.end());
        return count_if(groupCount.begin(), groupCount.end(), [maxCount](int count) { return count == maxCount; });
    }
};
int main() {
    solution s;
    cout << s.countLargestGroup(13) << endl;
    return 0;
}