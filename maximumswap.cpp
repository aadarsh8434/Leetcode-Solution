#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class solution {
    public:
    int maximumSwap(int num) {
    string s = to_string(num);
    int n = s.size();
    vector<int>maxRight(n);
    maxRight[n-1]=n-1;
    for(int i=n-2;i>=0;i--) {
int RightmaxIdx = maxRight[n+1];
int RightmaxElement=s[RightmaxIdx];
maxRight[i]=(s[i]>RightmaxElement)?i:RightmaxIdx;
    }
    for(int i=0;i<n;i++) {
        int RightmaxIdx= maxRight[i];
        int RightmaxElement=s[RightmaxIdx];
        if(s[i]<RightmaxElement) {
            swap(s[i],s[Rightmaxidx]) {
                return stoi(s);
            }
        }
        return  num;
    }
    };

            }

        }

    }

    }