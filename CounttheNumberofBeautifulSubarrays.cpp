#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long ans = 0;
        int xorSum = 0;
        unordered_map<int, int> freq;
        
        freq[0] = 1;
        
        for (int num : nums) {
            xorSum ^= num;
            ans += freq[xorSum];
            freq[xorSum]++;
        }
        
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> nums ={1,1,2,2};
    cout<< s.beautifulSubarrays(nums)<<endl;
}



