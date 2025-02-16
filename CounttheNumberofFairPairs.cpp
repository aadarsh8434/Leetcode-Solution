#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
       long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) {
            int j=upper;
            while(j>=lower && i<j) {
                if(nums[i]+nums[j]>=lower && nums[i]+nums[j]<=upper) {
                    ans++;
                }
                j--;
            }
        }
        return ans;
       }

                };
                int main() {
                    solution s;
                    vector<int> nums = {0,1,7,4,4,5};
                    int lower = 3, upper=6;
                    cout<<s.countFairPairs(nums,lower,upper)<<endl;
                    return 0;

                }
    