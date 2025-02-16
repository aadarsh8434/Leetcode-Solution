#include<iostream>
#include<vector>
#include<string>
using namespace std;
class solution {
    public:
int findhcf(int a, int b) { 
        while(a!=b) {
            if(a>b) {
                a=a-b;
            }
            else {
                b=b-a;
            }
            return b;
            }
    }
};
int main() {
        int a,b;
        cin>>a>>b;
         solution ob;
        cout<<ob.findhcf(a,b)<<endl;
}
