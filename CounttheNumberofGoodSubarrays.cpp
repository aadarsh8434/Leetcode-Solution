#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    long long countGood(vector<int>& nums, int k) {
        int n  = nums.size();
        int i=0, j=0;
        long long result=0;
        unordered_map<int,int>mp;
        long long pairs=0;
        while(j<n) {
           pairs+= mp[nums[j]];
           mp[nums[j]]++;
           while(pairs>=k) {
            result+= (n-j);
            mp[nums[i]]--;
            pairs-= mp[nums[i]];
            i++;
           }
           j++;
        }
        return result;
    }
    };
    int main() {
        solution s;
        vector<int> nums = {1,2,3,1,1,3};
        int k = 2;
        cout<<s.countGood(nums,k)<<endl;
        return 0;
    }