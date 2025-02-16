#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int lengthOfLastWord(string s) {
        int length=0;
        bool foundword=false;
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i]==' ') {
                foundword=true;
                break;
            }
            else {
                length++;
                foundword=true;
            }
        }
        return length;

            }
            };
        int main() {
            solution s;
            cout<<s.lengthOfLastWord("hello world")<<endl;
            return 0;
        }
