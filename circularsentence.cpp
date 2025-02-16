#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
       bool isCircularSentence(string sentence) {
        int n = sentence.size();
        for(int i=0;i<n;i++) {

            if(sentence[i] == sentence[(i+1)%n]) return true;
            if(sentence[i]== sentence[0] && i+1<n ) return false;
        }
        return false;
       }
};
        }
}