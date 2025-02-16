#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    vector<int> majorityElement(vector<int>& nums) {
        int count=0;
        int candidate;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                candidate=nums[i];
                count=1;
                }
                else {
                    if(nums[i]==candidate){
                        count++;
                        } else{
                            count--;
                        }
                }
        }
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==candidate)
            {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};
          