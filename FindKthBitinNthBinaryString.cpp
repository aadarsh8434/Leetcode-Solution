#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1) return '0';
        
        vector<char> bits(1, '0');
        for (int i = 2; i <= n; ++i) {
            int size = bits.size();
            bits.push_back('1');
            for (int j = size - 1; j >= 0; --j) {
                bits.push_back(bits[j] == '0' ? '1' : '0');
            }
        }
        
        return bits[k - 1];
    }
};
int main() {
    Solution s;
    cout<<s.findKthBit(4,11)<<endl;

}