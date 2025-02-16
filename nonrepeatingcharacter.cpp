#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class solution {
    public:
     char nonRepeatingChar(string &s) {
        unordered_map<char,int>freq;
        for(char c: s) {
            freq[c]++;
        }
        for(char c: s) {
            if(freq[c]==1) {
                return c;
            }
        }
        return '\0';
     }
};
int main() {
    solution s;
    char c = s.nonRepeatingChar("geeksforgeeks");
    cout<< c<<endl;

}