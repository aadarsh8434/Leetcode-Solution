#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int n= nums.size();
            int result=0;
            for(int i=0;i<n;i++) {
                if((nums[i]>=10 && nums[i]<=99) || (nums[i]>=1000 && nums[i]<=9999) || (nums[i]==100000)) {
                    result++;
                }
            }
            return result;
        }
    };
    int main() {
        Solution s;
        vector<int>nums={12,345,2,6,7896};
        cout<<s.findNumbers(nums)<<endl;
        return 0;
    }