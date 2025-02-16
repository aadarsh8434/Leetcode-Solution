#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        bool checkIfPangram(string sentence) {
       vector<bool> vis(26,false);
       for(int i=0;i<sentence.size();i++) {
        if(sentence[i]>= 97 && sentence[i]<= 122) {
            vis[sentence[i] - 97] = true;
        }
        else if(sentence[i]>=65 && sentence[i]<=90) {
            vis[sentence[i] -65] = true;
        }
       }
       for(int i=0;i<26;i++) {
        if(!vis[i]) return false;
       }
       return true;
        }
};

       }
       }
        }
        }
       }