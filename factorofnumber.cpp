#include<iostream>
using namespace std;
// void divisor(int n) {
//     for(int i=1;i<n;i++) 
//         if(n%i==0) 
//             cout<<i<<" ";
        
//     }
//     int main() {
//         int n=6;
//         cout<<"factor of a number"<<n<<"are:";
//         divisor(n);

//     }
// #include <iostream>

int divisorsum(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n = 6;
    int sum = divisorsum(n);
    std::cout << "sum of divisors of " << n << " is: " << sum << std::endl;
    return 0;
}
        
 

        


 