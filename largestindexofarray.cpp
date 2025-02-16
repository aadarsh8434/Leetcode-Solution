#include<iostream>
#include<vector>
#include<stdio.h>
#include<climits>
using namespace std;
class solution {
    public:
    int largestindex(vector<int>&nums){
        int max =INT_MIN;
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max) {
                max = nums[i];
                index = i;
            }
        }
        return index;
            }
        };
int main() {
    solution s;
    vector<int> nums= {5,6,3,7,8,9};
    cout<<s.largestindex(nums)<<endl;
    return 0;
}