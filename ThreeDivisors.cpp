#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class solution {
    public:
    bool isThree(int n) {
        int sqrt_n = sqrt(n);
        if(sqrt_n * sqrt_n != n) {
            return false;
        }
        return isprime(sqrt_n);
    }
    private:
    bool isprime(int n) {
        if(n<2) {
            return false;
        }
        for(int i=2;i<=sqrt(n);i++) {
            if(n%i == 0) {
                return false;
            }
        }
        return true;
    }
};
      