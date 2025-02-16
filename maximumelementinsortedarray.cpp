#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    int maximum(vector<int>&nums) {
        int n=nums.size();
        int min=nums[0];
        for(int i=1;i<n;i++) {
            if(nums[i]<min) {
            nums[1]=min;
            min=nums[i];
            }
        }
        return min;


            }
        };
int main() {
    solution s;
    vector<int> nums={1,4,5,8,9};
    cout<<s.maximum(nums)<<endl;
    return 0;
}
 