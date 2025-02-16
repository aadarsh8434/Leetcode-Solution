#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        int countPrefixes(vector<string>& words, string s) {
            unordered_map<string>str;
            int count=0;
            for(int i=0;i<words.size();i++) {
                str[words[i]]++;
            }
            for(int i=0;i<words.size();i++) {
                if(str[words[i]]!=0) {
                    if(words[i].size()<s.size()) {
                        if(s.substr(0,words[i].size()==words[i])) {
                            count++;
                        }
                    }
                    else {
                        if(s.substr(0,words[i].size())== words[i]) {
                            count++;
                        }
                    }
                        }
            }
            return count;
        }
 };
                     