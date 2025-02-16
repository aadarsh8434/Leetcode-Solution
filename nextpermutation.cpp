#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;
class solution {
    public:
    void nextpermutation(vector<int>&nums) {
        int n = nums.size();
        int i = n-2;
        while(i>=0 && nums[i+1]<=nums[i]) {
            i--;
        }
        if(i>=0) {
            int j=n-i;
            int min = nums[i]+1;
            for(int k=i+1;k<n;k++) {
                if(nums[k]<min) {
                    min = nums[k];
                    j = k;
                }
            }
            swap(nums[i],nums[j]);
            sort(nums.begin()+i+1,nums.end());
        }
        }
                };
                int main() {
                    solution s;
                    
                }

        
          
