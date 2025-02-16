
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        long long repairCars(vector<int>& ranks, int cars) {
            long long l=1, r=1e18;
            while(l<r) {
                long long mid = l+(r-l)/2;
                long long time=0;
                for(int i=0;i<ranks.size();i++) {
                    time+= (ranks[i]+mid-1)/mid;
                }
                if(time>cars) l=mid+1;
                else r=mid;
            }
            return l;
        }
};