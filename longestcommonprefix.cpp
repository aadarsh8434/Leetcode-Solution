#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
      string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++) {
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if(prefix.size() == 0) return "";
                }
                }
                return prefix;
      }
};
int main() {
    solution s;
    vector<string>strs ={"flow","flower","flight"};
    cout<<s.longestCommonPrefix(strs)<<endl;
    return 0;
}