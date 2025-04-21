#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int numberOfArrays(vector<int>& diff, int lower, int upper) {
            const int n=diff.size(), x_range=upper-lower;
            long long sum=0, M=0, m=0;
            for(int i=0; i<n; i++){
                const int x=diff[i];
                sum+=x;
                if (sum>M) M=sum;
                if (sum<m) m=sum;
                if (M-m>x_range) return 0;
            }
            return x_range-(M-m)+1;
        }
    };
    int main() {
        Solution s;
        vector<int> diff = {3, 2, -1, 3, 3};
        int lower = 2, upper = 3;
        cout << s.numberOfArrays(diff, lower, upper) << endl;
        return 0;
    }