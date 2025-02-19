
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    string getHappyString(int n, int k) {
        vector<string>res;
        string s="";
        dfs(res,s,n);
        if(res.size()<k) return "";
        return res[k-1];
    }
    void dfs(vector<string>&res,string s,int n) {
        if(s.size()==n) {
            res.push_back(s);
            return;
        }
        for(int i=0;i<3;i++) {
            if(s.size()==0 || s.back()!=('a'+i)) {
                s.push_back('a'+i);
                dfs(res,s,n);
                s.pop_back();
            }
        }
    }
};
int main() {
    solution s;
    cout<<s.getHappyString(1,3)<<endl;
    cout<<s.getHappyString(1,4)<<endl;
    cout<<s.getHappyString(3,9)<<endl;
    cout<<s.getHappyString(2,7)<<endl;
    return 0;
}
      