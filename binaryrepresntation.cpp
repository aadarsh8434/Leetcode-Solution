
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    string getBinaryRep(int N) {
        string binary = "";
        while(N>0) {
            binary = to_string(N%2) + binary;
            N= N/2;
        }
        return binary;
    }
};
int main() {
    solution s;
    //cout<<" getBinaryRep(N)"<<endl;
    cout<<s.getBinaryRep(5)<<endl;
    return 0;


}
