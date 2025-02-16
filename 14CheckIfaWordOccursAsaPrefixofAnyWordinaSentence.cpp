#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        int isPrefixOfWord(string sentence, string searchWord) {
            unordered_map<string,string> mp;
            int n = sentence.size();
            int m = searchWord.size();
            int i=0;
            while(i<n) {
                string s = "";
                while(i<n && sentence[i]!=' ') {
                    s += sentence[i];
                    i++;
                }
                mp[s] = s;
                i++;
            }
            for(auto it:mp) {
                if(it.first.size()>=searchWord.size() && it.first.substr(0,searchWord.size()) ==searchWord) {
                    return it. second.size();
                }
            }
            return -1;
        }

                };
           