#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int maxAscendingSum(vector<int>& nums) {
            int n = nums.size();
            int sum=0;
            int maxsum=0;
            for(int i=0;i<n;i++) {
                if(nums[i]>nums[i-1]) {
                    sum= nums[i];
                    maxsum=max(maxsum,sum);
                }
                else {
                    sum=nums[i];
                    maxsum=max(maxsum,sum);
                }
            }
            return maxsum;
        }
};
                }
                }
            }
}