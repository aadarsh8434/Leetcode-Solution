#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
    int combinationofarray(vector<int>&nums) {
        int n=nums.size();
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++) {
            sum+=nums[i];
            if(sum%2==0) {
                count++;
            }
        }
        return count;

    }
};
int main() {
    solution s;
    vector<int>nums = {1,2,3,4};
    cout<<s.combinationofarray(nums)<<endl;
    return 0;

}