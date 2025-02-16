
#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
        vector<int> sortArrayByParityII(vector<int>& nums) {
            vector<int> res(nums.size());
            int even=0, odd=1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%2==0) {
                    res[even]=nums[i];
                    even+=2;
                }
                else {
                    res[odd]=nums[i];
                    odd+=2;
                }
            }
            return res;
        }
};
int main() {
    solution s;
    vector<int> nums={4,2,5,7};
    vector<int> res=s.sortArrayByParityII(nums);
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    return 0;
}
   