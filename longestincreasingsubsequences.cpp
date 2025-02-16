#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
class solution {
    public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0) return 0;
        vector<int>dp(nums.size(),1);
        int max=1;
        for(int i=1;i<nums.size();i++) {
            for(int j=0;j<i;j++) {
                if(nums[i]>nums[j]) dp[i]=max(dp[i],dp[j]+1);
            }
                max=max(max,dp[i]);
            }
        return max;
    }
};


            }
        }
}