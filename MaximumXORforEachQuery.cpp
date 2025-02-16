#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
      vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int>result(n);
        int XOR=0;
        for(int i=0;i<n;i++) {
            XOR^=nums[i];
        }
        int mask = ((1<<maximumBit)-1);
        for(int i=0;i<n;i++) {
            int k = XOR^ mask;
            result[i]=k;
            XOR = (XOR^nums[n-1-i]);
        }
        return result;
        }
        };
        int main() {
            solution s;
            vector<int> nums = {8,5,6,7};
            int maximumBit = 3;
            vector<int> result=s.getMaximumXor(nums,maximumBit);
            return 0;
        }
      
