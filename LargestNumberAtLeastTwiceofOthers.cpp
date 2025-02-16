#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
        int dominantIndex(vector<int>& nums) {
            if(nums.size()==1) return 0;
            int max=-1,secondmax=-1,maxindex=-1;
            for(int i=0;i<nums.size();i++) {
                if(nums[i]>max) {
                    secondmax=max;
                    max=nums[i];
                    maxindex=i;
                }else if(nums[i]>secondmax) {
                    secondmax=nums[i];
                }
                }
        if(max>=2*secondmax) {
            return maxindex;
        } else {
            return -1;
        }
        }
                };
           
   