#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class solution {
    public:
        int smallestEvenMultiple(int n) {
                 return (n % 2 == 0) ? n : 2 * n;
        }
};
int main() {
    solution s;
    cout<< s.smallestEvenMultiple(5)<<endl;
    
}
 