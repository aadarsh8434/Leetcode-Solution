#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
class solution {
    public:
    int rotated(vector<int>&nums,int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r) {
           int mid=(l+r)/2;
            if(nums[mid]==target) {
                return mid;
            }
            else if(nums[l]<nums[mid]) {
                if(nums[l]<=target && target<=nums[mid]) {
                    r=mid-1;
                }
                else {
                    l=mid+1;  
                }
                }
                else if(nums[l]>nums[mid]) {
                    if(nums[mid]<=target && target<=nums[mid]) {
                        l=mid+1;
                    }
                    else {
                        r=mid-1;
                    }
                }
                else {
                    l=mid+1;
                }
            }
            }


        };
        int main() {
            solution s;
            vector<int>nums={1,2,3,4,5,6};
            int target=3;
            cout<<s.rotated(nums,target)<<endl;

        }



