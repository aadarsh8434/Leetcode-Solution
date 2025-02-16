#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
        int unequalTriplets(vector<int>& nums) {
     int n=nums.size();
     int ans=0;
     for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                if(nums[i]!=nums[j] && nums[i]!=nums[k] && nums[j]!=nums[k] ) {
                    ans++;
                }
            }
        }
     }
     return ans;

                }
            };
            int main() {
                solution s;
                vector<int>v={1,2,3,4,5};
                cout<<s.unequalTriplets(v)<<endl;
                return 0;

            }
   