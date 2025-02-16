#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int kthsmallest(vector<int>&nums,int k,int N) {
        sort(nums.begin(),nums.end());
        return nums[k-1];
    }
};
int main() {
    solution s;
    vector<int>nums ={4,5,6,8,9,10,12};
    int k =4;
    int N=nums.size();
    cout<<s.kthsmallest(nums,k,N)<<endl;
    return 0;
}


