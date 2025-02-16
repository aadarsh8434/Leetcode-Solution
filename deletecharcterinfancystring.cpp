#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
class solution {
    public:
      string makeFancyString(string s) {
        int n=s.length();
        string result="";
        result.push_back(s[0]);
        int freq=1;
        for(int i=1;i<n;i++){
            if(s[i]==result.back()) {
                freq++;
                if(freq<3) {
                    result.push_back(s[i]);
                }
            } else {
                result.push_back(s[i]);
                freq=1;
            }
        }
        return result;
            }
                };
            }
            if(i<n-1 && s[i]==s[i+1]) {
                freq++;
            }
            else {
                res.push_back(s[i]);
                res.push_back(to_string(freq));
                freq=1;
            }
        }
        return res;
      }

            };
            }
            if(i%2==0) {
                res+=s[i];
            }
        }
        return res;
      }
}

            }
        }
}
