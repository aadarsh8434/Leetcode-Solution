#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
class solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
        }
};
int main() {
    solution s;
    vector<int> nums = {3,5,2,8,9,6};
    int k=3;
    cout<<s.findKthLargest(nums,k)<<endl;
    

}

