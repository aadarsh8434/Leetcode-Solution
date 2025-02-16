#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    string addconsonant(const string&str) {
        string result= str;
        unordered_map<char,int>mp;
        for(char ch:str) {
            if(isalpha(ch)) {
                if(mp.find(tolower(ch))!=mp.end()) {
                    result+=tolower(ch);
                    mp[tolower(ch)]++;
                }
                else {
                    mp[tolower(ch)]=1;
                    result+=tolower(ch);
                }
            }
        }
        return result;
    }
};
int main() {
    solution s;
    string input="abvchjkgjhjhk";
    string output=s.addconsonant(input);
    cout<<"string adding consonant twice:"<<output<<endl;
    return 0;
}
       