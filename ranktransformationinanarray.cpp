#include<iostream>
#include<cmath>
#include<vector>
#include<stdio.h>
#include<unordered_map>
#include<set>
using namespace std;
vector<int> transformofarray(vector<int>&nums) {

    int n = nums.size();
    set<int>s;
    for(auto &sum:nums) {
        s.insert(sum);

    }
    unordered_map<int,int>mp;
    for(auto &sum:s) {
        mp[sum]=i++;
    }
    vector<int>ans(arr.size());
    for(int i=0;i<nums.size();i++) {
        ans[i]=mp[nums[i]]+1;

    }
    return ans;
    
    }

