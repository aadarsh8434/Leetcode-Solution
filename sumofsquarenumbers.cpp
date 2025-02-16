
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        bool judgeSquareSum(int c) {
            for(long long a=0;a*a<=c;a++) {
                double b = sqrt(c-a*a);
                if(b==(int)b) return true;
            }
            return false;
        }
};
int main() {
    solution s;
    int c=5;
    cout<<s.judgeSquareSum(c)<<endl;
    return 0;
}