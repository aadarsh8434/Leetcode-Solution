#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
 int maxWidthRamp(vector<int>& nums) {
    int n = nums.size();
    vector<int> pre(n,0);
    vector<int> suf(n,0);
    int maxw=0;
    for(int i=0;i<n;i++) {
        if(i==0) pre[i]=nums[i];
        else pre[i]=max(pre[i-1],nums[i]);
    }
    for(int i=n-1;i>=0;i--) {
        if(i==n-1) suf[i]=nums[i];
        else suf[i]=min(suf[i+1],nums[i]);
    }
    for(int i=0;i<n;i++) {
        if(pre[i]<=suf[i]) {
            maxw=max(maxw,i+suf[i]-n);
        }
    }
    return maxw;
 };

