#include<iostream>
#include<stdio.h>
#include<string>
#include<to_string>
using namespace std;
class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        int len = s.length();
        for (int i = len - 3; i > 0; i -= 3) {
            s.insert(i, ".");
        }
        
        return s;
    }
};
int main() {
    Solution obj;
    cout<<obj.thousandSeparator(1000)<<endl;



}

    

