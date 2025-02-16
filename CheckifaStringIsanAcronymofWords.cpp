#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
        bool isAcronym(vector<string>& words, string s) {
            int n= words.size();
            int m = s.size();
            if(n!=m) return false;
            for(int i=0;i<n;i++) {
                if(words[i][0]!=s[i]) return false;
            }
            return true;
            }
};
int main() {
    solution s;
    vector<string>words ={"un","ited","states","of","america"};
    string acronym= "UNitedstatesofamerica";
    cout<<boolalpha<<s.isAcronym(words,acronym)<<endl;


}