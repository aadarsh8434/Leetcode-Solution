
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int nextGreaterElement(int n) {
            string s = to_string(n);
            next_permutation(s.begin(),s.end());
            long long res = stoll(s);
            return (re>INT_MAX || res<=n) ? -1 :res;
        }
};
}