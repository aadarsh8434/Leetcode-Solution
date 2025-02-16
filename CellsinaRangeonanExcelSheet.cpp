#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    vector<string> cellsInRange(string s) {
        vector<string>res;
        int start=s.substring(0,2);
        int end = s.substring(3,2);
        for(int i=start;i<=end;i++) {
            for(int j=s.substring(0,1);j<s.substring(2,1));
            res.push_back(string(1,i)+string(1,j));
        }
        return res;
        }
};