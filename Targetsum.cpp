#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int solve(vector<int>&nums,int i,int currentsum,int target) {
        if(i== nums.size()) {
            return currentsum==target?1:0;
        }
        //     if(currentsum==target) {
        //         return 1;
        //     }
        //     return 0;
        // }
        int add = solve(nums,i+1,currentsum+nums[i],target);
        int minus = solve(nums,i+1,currentsum-target, target);
        return add+minus;
    }
        int findTargetSumWays(vector<int>& nums, int target) {
            return solve(nums,0,0,target);
        }
    };
//             int n = nums.size();
//             int count=0;
//             for(int i=0;i<n;i++) {
//                 for(int j=i+1;j<n;j++) {
//                     if(nums[i]+nums[j]== target) {
//                         count++;
//                     }
//                 }
//             }
//             return count;
//         }
// };