#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int minimumRecolors(string blocks, int k) {
       int n = blocks.size();
        int i = 0;
        int j = 0;
        int ops = k;
        int W = 0;

        while (j < n) {
            if (blocks[j] == 'W') {
                W++;
            }

            if (j - i + 1 == k) {
                ops = min(ops, W);
                if (blocks[i] == 'W') {
                    W--;
                }
                i++;
            }

            j++;
        }
        return ops;
    }
};
int main() {
    solution s;
    string blocks = "WBWBWBWB";
    int k = 3;
    cout << s.minimumRecolors(blocks, k) << endl;
    return 0;

}