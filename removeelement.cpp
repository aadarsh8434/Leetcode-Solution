
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int i=0;
            for(int j=0;j<nums.size();j++) {
                if(nums[j]!=val) {
                    nums[i] = nums[j];
                    i++;
                }
            }
            return i;
        }
};
int main() {
    solution s;
    vector<int> nums = {3,2,2,3};
    int val =3;
    cout<<s.removeElement(nums,val);
    return 0;
}