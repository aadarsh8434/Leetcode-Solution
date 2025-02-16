#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    unordered_map<char,int>frequencyofcharacter(const string&str) {
        unordered_map<char,int>freqmap;
      for(char c:str) {
        freqmap[c]++;
      }
      return freqmap;
    }
};
int main() {
    solution s;
    string str="hello";
    unordered_map<char,int>freq=s.frequencyofcharacter(str);
    for(const auto&pair:freq) {
        cout<<pair.first<<" : "<<pair.second<<endl;
        return 0;
    }
};
   