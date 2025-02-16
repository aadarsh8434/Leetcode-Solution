#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int powerof2(vector<int>&nums) {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++) {
            if(nums[i]%2==0) {
                ans++;
            }
        }
        return ans;
            }
        };
        int main() {
            solution s;
            vector<int> nums={4,5,6,7,0,2};
            cout<<s.powerof2(nums)<<endl;
        }