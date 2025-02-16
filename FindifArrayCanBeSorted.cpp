#include<iostream>
#include<vector>
#include<string>
#include<sort>
using namespace std;
class solution {
    public:
        bool canSortArray(vector<int>& nums) {
            int n = nums.size();
            int count=0;
            for(int i=0;i<n;i++) {
                if(nums[i]<0) {
                    count++;
                }
            }
            if(count>1) {
                return false;
            }
            sort(nums.begin(),nums.end());
            for(int i=0;i<n-1;i++) {
                if(nums[i]==nums[i+1]) {
                    return false;
                }
            }
            return true;
        }
};
           
    
     