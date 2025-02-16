#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        string addSpaces(string s, vector<int>& spaces) {
            string res = "";
            int i=0;
            while(i<spaces.size()) {
                res += s.substr(0, spaces[i]);
                res += " ";
                s = s.substr(spaces[i], s.size()-spaces[i]);
                i++;
            }
            res += s;
            return res;
        }
};