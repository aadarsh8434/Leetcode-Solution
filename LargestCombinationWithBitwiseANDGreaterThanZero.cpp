#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
     int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        vector<int> dp(n,0);
        for(int i=0;i<n;i++) {
            for(int j=i;j>=0;j--) {
                if(candidates[i]== candidates[j]) {
                    dp[i] = dp[j]+1;
                    break;
                }
            }
        }
        int max = 0;
        for(int i=0;i<n;i++) {
            max = max>dp[i]?max:dp[i];
        }
        return max;
     }
};

  