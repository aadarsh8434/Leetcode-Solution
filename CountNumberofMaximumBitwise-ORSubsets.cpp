#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int countsubsets(int idx,int curror,vector<int>&nums,int maxor) {
        if(idx==nums.size()) {
            return 1;
            return 0;
        }
        int takecount= countsubsets(idx+1,curror | nums[idx],nums,maxor);
        int notTakeCount = countsubsets(idx+1,curror,nums,maxor); 
        return takecount+ notTakeCount;
    }  
        int countMaxOrSubsets(vector<int>& nums) {
            int maxor=0;
            for(int &num : nums) {

                maxor |=num;
            }
            int curror=0;
            return countsubsets(0,curror,nums,maxor);
        }

};