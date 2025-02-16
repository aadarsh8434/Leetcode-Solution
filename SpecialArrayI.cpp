#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        bool isArraySpecial(vector<int>& nums) {
    for(int index=0;index<nums.size()-1;index++) {
        if(nums[index]==nums[index+1]) {
            return true;
        }
    }
    return false;
        }
};
int main() {
    solution s;
    vector<int> nums ={2,1,4};
    cout<<s.isArraySpecial(nums)<<endl;
    return 0;
}
    