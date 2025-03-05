#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long coloredCells(int n) { return 1 + 4LL * n * (n - 1) / 2; }
};
int main() {
    Solution s;
    cout << s.coloredCells(3) << endl; 
    return 0;
}