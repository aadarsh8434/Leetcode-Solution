#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    int factorialnumber(int num) {
        int fact = 1;
        for(int i=1;i<=num;i++) {
            fact = fact*i;
        }
        return fact;
    }
};
int main() {
    int n;
    cout<<"enter a number:";
    cin>>n;
    solution s;
    int result = s.factorialnumber(n);
    cout<<"factorial of"<< n <<"is"<<result<<endl;
    return 0;

}