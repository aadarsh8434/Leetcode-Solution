
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        long long ans=0;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        for(int i=1;i<n/2;i++) {
            long long a=1;
            long long b=1;
            long long c=1;
            long long d=1;
            for(int j=0;j<mp[nums[i]];j++) {
                a*=nums[i];
                }
                for(int j=0;j<mp[nums[n-i-1]];j++) {
                    b*=nums[n-i-1];
                    }
                    for(int j=0;j<mp[nums[i]];j++) {
                        c*=nums[i];
                        }
                        for(int j=0;j<mp[nums[n-i-1]];j++) {
                            d*=nums[n-i-1];
                            }
                            if(a!=0 && b!=0 && c!=0 && d!=0) {
                                ans+=a*b*c*d;
                                }
        }
        return ans;
     }
};
  