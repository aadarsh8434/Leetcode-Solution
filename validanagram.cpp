#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.length() != t.length()) {
                return false;
            }
            int count[26]={0};
            for(int i=0;i<s.length();i++) {
                count[s[i]- 97]++;
                count[t[i]-97]--;
            }
            for(int i=0;i<26;i++) {
                if(count[i]!=0) {
                    return false;
                }
            }
            return true;
        }
                };
            }
            }
            unordered_map<char,int> mp;
            for(int i=0;i<s.length();i++) {
                mp[s[i]]++;
            }
        }

            }
            }
}