#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        int alternatingSubarray(vector<int>& nums) {
            int n = nums.size();
            int res=0;
            int sum=0;
            for(int i=0;i<n;i++) {
                if(i%2==0) {
                    sum+=nums[i];
                    res=max(res,sum);
                }
                else {
                    sum=max(0, sum-nums[i]);
                    res=max(res,sum);
                }
            }
            return res;
        }
};

                }
                }
            }
}
