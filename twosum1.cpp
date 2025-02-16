#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
     vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) {
            int num = nums[i];
            int complement = target - num;
            if(mp.find(complement)!=mp.end()) {
                return {mp[complement],i};
            }
            mp[num] = i;
        }
        return {};
     }
};

int main() {
    solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    vector<int> result = s.twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    
    return 0;
}