#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
       long long minEnd(int n, int x) {
        long long num=x;
        for(int i=1;i<n;i++) {
            num=(num+1)|x;
        }
        return num;
       }
};
int main() {
    solution s;
    int n,x;
    cout<<"enter the values of n and x:";
    cin>>n>>x;
    cout<<"the minimum end value is :" << s.minEnd(n,x)<<endl;
    return 0;
}
