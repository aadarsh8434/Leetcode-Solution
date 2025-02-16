#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        while(i<s.size() && j<t.size()) {
            if(s[i]==t[j])  {
                i++;
                j++;
            }
            else {
                i++;
            }
        }
        return t.size()-j;
    }
};
   