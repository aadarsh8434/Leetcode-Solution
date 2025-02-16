#include<iostream>
#include<vector>
using namespace std;
bool isautomorphic(int N) {
    int sq=N*N;
    while(N>0) {
        if(N%10!=sq%10) return false;
        N/=10;
        sq/=10;
    }
    return true;

    }
    int main() {
        int N=25;
        if(isautomorphic) {
            cout<<"The number is automorphic"<<endl;

        }
        else {
            cout<<"the number is not automorphic"<<endl;
        }
    }


