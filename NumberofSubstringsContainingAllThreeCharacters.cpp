#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
       int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        int ans=0;
        int i=0,j=0;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
                mp[s[j]]--;
                j++;
            }
            ans += j; 
        }
        return ans;

                }
            };