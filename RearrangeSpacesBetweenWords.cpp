
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    string reorderSpaces(string text) {
        string words =" ";
        int spaces =0;
        for(int i=0;i<text.length();i++) {
            if(text[i]==' ') {
                spaces++;
            }
            else {
                words += text[i];
            }
        }
        if(words.length()==1) {
            return words;
        }
        int wordscount=0;
        for(int i=0;i<words.length();i++) {
            if(words[i]==' ') {
                wordscount++;
            }
        }
        int spacescount = wordscount+1;
        int spacesbetweenwords = spaces/spacescount;
        string result = "";
        int i=0;
        while(i<words.length()) {
            if(words[i]!= ' ') {
                result += words[i];
                i++;
            }
            else {
                result += " ";
                int j=0;
                while(j<spacesbetweenwords) {
                    result += " ";
                    j++;
                }
                while(i<words.length() && words[i]==' ') {
                    i++;
                }
            }
        }
        while(spaces>0) {
            result += " ";
            spaces--;
        }
        return result;
    }
};
        }
                }
                }
            }
            }
        }
            }
        }
        }
            }
            }
        }
}