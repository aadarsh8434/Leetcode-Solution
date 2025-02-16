#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class solution {
    public:
      int countCharacters(vector<string>& words, string chars) {
        int count=0;
        for(char ch: chars) {
            count+=1;
            unordered_map<char,int> m;
            for(string word : words) {
                for(char c: word) {
                    if(m.find(c)!=m.end()) {
                        m[c]+=1;
                    }
                    else {
                        m[c]=1;
                    }
                    if(m[c]>count) {
                        count=m[c];
                    }
                    else if(m[c]==count) {
                        count=m[c];
                    }
                    }
            }
            return count;
        }
      }
      
      };
      int main() {
        solution s;
        vector<string> words ={"hello"."world"};
        string chars ="hello";
        cout<<s.countCharacters(words,chars)<<endl;
        return 0;
      }