#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
     int maxRemovals(string source, string pattern, vector<int>& targetIndices) {
        int n = source.size();
        int m = pattern.size();
        int k = targetIndices.size();
        int ans= 0;
        for(int i=0;i<n;i++) {
            int j=0;
            while(j<m && i+j<n && source[i+j]==pattern[j]) {
                j++;
            }
            if(j==m) {
                ans++;
                for(int x:targetIndices) {
                    if(x<i) {
                        ans--;
                        break;
                    }
                }
            }
        }
        return ans;

                    }
                };
            }


            }
        }
     }

};