
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int n = nums.size();
            int l=0,r=n-1;
            while(l<r) {
                int mid = (l+r)/2;
                if(nums[mid]> nums[mid+1]) {
                    r=mid;
                }
                else {
                    l=mid+1;
                }
            }
            return l;
        }
};
int main() {
    solution s;
    vector<int> nums = {1,2,3,1};
    cout<<s.findPeakElement(nums)<<endl;
    return 0;
}