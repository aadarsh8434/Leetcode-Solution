#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
        string mostCommonWord(string paragraph, vector<string>& banned) {
            string word, res;
            vector<string> words ;
            for(int i=0;i<paragraph.size();i++) {
                if(paragraph[i]>='a' && paragraph[i]<='z') {
                    word  += paragraph[i];
                    if(i=paragraph.size()-1 || paragraph[i+1]<='A'  && paragraph[i]<='Z') {
                        words.push_back(word);
                        word ="";
                    }
                    }
            }
            return res;

                }
            };
