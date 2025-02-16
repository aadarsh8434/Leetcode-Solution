#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_set>
using namespace std;
class solution {
    public:
        long long maximumSubarraySum(vector<int>& nums, int k) {
            long long sum = 0;
            long long currwindowsum=0;
            unordered_set<int>st;
            int i=0;
            int j=0;
            int n= nums.size();
            while(j<n) {
                while(st.count(nums[j])) {
                    currwindowSum -= nums[i];
                    st.erase(nums[i]);
                    i++;
                }
                currwindowsum += nums[j];
                st.insert(nums[j]);
                if(j-i+1==k) {

                    result = max(result,currwindowSum);
                    currwindowSum -= nums[i];
                    st.erase(nums[i]);
                    i++;
                    }
                    j++;
                    }
                    return result;
                }
};
int main () {
    solution s;
    vector<int> nums= {1,3,6,1,2,5};
    int k =2;
    
}
        