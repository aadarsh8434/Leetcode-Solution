#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int splitArray(vector<int>&nums,int k) {
        int n = nums.size();
        int l=0;
        int r=0;
        for(int i=0;i<n;i++) {
            r+=nums[i];
            l=max(l,nums[i]);
        }
        while(l<r) {
            int mid = l+(r-l)/2;
            int sum=0;
            int cnt=1;
            for(int i=0;i<n;i++) {
                sum+=nums[i];
                if(sum>mid) {
                    cnt++;
                    sum=nums[i];
                }
            }
            if(cnt>k) {
                l=mid+1;
            }
            else {
                r=mid;
            }
        }
        return l;
    }

            };
            int main() {
                solution s;
                vector<int>nums ={7,2,5,10,8};
                int k=2;
                cout<<s.splitArray(nums,k)<<endl;

            }
          

   