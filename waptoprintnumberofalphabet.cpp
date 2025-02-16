#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
    string name;
    cout<<"enter your name"<<endl;
    getline(cin,name);
    int alphabetCount=0;
    for(char c:name) {
        if(isalpha(c)) {
            alphabetCount++;
        }
    }
    cout<<" number of alphabets in your name is "<<alphabetCount<<endl;
    return 0;
        }
 