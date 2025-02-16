#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
     bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>magazinemap;
        for(int i=0;i<magazine.size();i++) {
            magazinemap[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++) {
            if(magazinemap.find(ransomNote[i])!=magazinemap.end()) {
                magazinemap[ransomNote[i]]--;
                if(magazinemap[ransomNote[i]]<0) {
                    return false;
                }
            }
            else {
                return false;
            }
        }
        return true;
     }
};
int main() {
    solution s;

}