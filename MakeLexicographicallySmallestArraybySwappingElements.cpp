#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
       vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int i=0;
        int j=n-1;
        vector<int> ans;
        while(i<=j) {
            if(nums[i]+nums[j]<=limit) {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                i++;
                j--;
            }
            else {
                ans.push_back(nums[i]);
                i++;
            }
        }
        return ans;
       }
};
 