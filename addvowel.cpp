#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class solution {
    public:
    string addvowels(const string&str) {
        string result;
        for(int i=0;i<str.length();i++) {
            if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E'|| str[i]=='I'||str[i]=='O'||str[i]=='U') {
                result.push_back(str[i]);
            }
            else {
                result.push_back('#');
            }
        }
        return result;
    }
};
int main() {
    solution s;
    string str="hello";
    cout<<s.addvowels(str)<<endl;

}
    