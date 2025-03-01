#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        //-1vector<int> res(n, 0);
        for (int i = 0; i < n-1; i++) {
            if (nums[i] ==  nums[i+1] && nums[i]!=0) {
                nums[i] *=2;
                nums[i+1] =0;
            }
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<n) {
            nums[j]=0;
            j++;
        }
        return nums;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1, 2, 2, 1, 1};
    vector<int> res = s.applyOperations(nums);
    cout << "Output: "; 
    for (int i = 0; i < res.size();i++) {
        cout << res[i] << " ";
    }
    return 0;
    }

        
