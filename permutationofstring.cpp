#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
class solution {
    public:
    int permutation(vector<int>&nums) {
        int n = nums.size();
        if(n==1) return 1;
        int count=0;
        for(int i=0;i<n;i++) {
            if(nums[i]!=nums[0]) {
                count++;
            }
        }
        if(count==n-1) return 0;
        return 1;
    }
        };
        int main() {
            solution s;
            vector<int> nums = {8,5,4};
            cout<<s.permutation(nums)<<endl;
        
        }