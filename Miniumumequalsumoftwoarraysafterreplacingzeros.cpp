#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    long long minSum(vector<int>&nums1,vector<int>&nums2) {
        long long sum1=0;
        long long sum2=0;

        long long zero1= 0;
        long long zero2 =0;
        for(int &num : nums1) {
            sum1 += num;
            if(num==0) {
                zero1 += 1;
                sum1 += 1;
            }
        }
        for(int &num : nums2) {
            sum2 += num;
            if(num==0) {
                zero2 += 1;
                sum2 += 1;
            }
        }
        if(sum1<sum2 && zero1==0) return -1;
        if(sum2< sum1 && zero2==0) return -1;
        return max(sum1,sum2);
    }
};
int main() {
    solution s;
    vector<int>nums1= {3,2,0,1,0};
    vector<int>nums2 ={6,5,0};
    cout<<s.minSum(nums1,nums2)<<endl;
    return 0;
}