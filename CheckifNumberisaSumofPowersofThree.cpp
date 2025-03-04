#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     bool checkPowersOfThree(int n) {
        //int n= nums.size();
        while(n>0) {
            if(n%3!=0 && n%3!=1 ) {
                return false;
                }
                n=n/3;
                }
                return true;
     }
};
int main() {
    solution s;
    cout<<s.checkPowersOfThree(12)<<endl;
    // cout<<s.checkPowersOfThree(81)<<endl;
    // cout<<s.checkPowersOfThree(82)<<endl;
    return 0;
}