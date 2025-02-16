#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int findnonrepeating(vector<int>&nums) {
        int n=nums.size();
        bool chk;
        for(int i=0;i<n;i++) {
            chk=false;
        }
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(nums[i]==nums[j]) {
                    chk=true;
                }
            }
            if(!chk) {
                return nums[i];
            }

            int main() {
                 solution s;
                vector<int>nums={1,8,8,6,7,2,3,8,9};
                cout<<s.findnonrepeating(nums)<<endl;
            }
    }
        };
    
