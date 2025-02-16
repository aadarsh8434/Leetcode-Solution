#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
      string convertToTitle(int columnNumber) {
        string res ="";
        while(columnNumber>0) {
            int temp = columnNumber%26;
            if(temp==0) {
                temp = 26;
                columnNumber =  columnnNumber/26-1;
            }
        }

}