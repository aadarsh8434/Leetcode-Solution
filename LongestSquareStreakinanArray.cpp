#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
        int longestSquareStreak(vector<int>& nums) {
            int n = nums.size();
            if(n<2) return 0;
            int maxlen=0;
            vector<int> dp(n,1);
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    if(nums[i]==nums[j] && i!=j) {
                        dp[i] = dp[j]+1;
                        maxlen = max(maxlen,dp[i]);
                    }
                }
            }
            for(int i=0;i<n;i++) {
                if(dp[i]>=4) return dp[i];
            }
            return -1;
        }

            };

    