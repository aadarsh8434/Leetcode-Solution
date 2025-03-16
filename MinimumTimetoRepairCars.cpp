
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    typedef long long ll;
    bool isPossible(vector<int>&ranks,int mid, int cars) {
        ll carFixed=0;
        for(int i=0;i<ranks.size();i++) {
            carFixed += sqrt(mid/ranks[i]);
        }
        return carFixed >= cars;
    }
        long long repairCars(vector<int>& ranks, int cars) {
            int n = ranks.size();
            ll l=1;
            int maxR = *max_element(begin(ranks),end(ranks));
            ll r = 1LL *maxR* cars*cars;
            int result=-1;
            while(l<=r) {
                ll mid = l+(r-l)/2;
                if(isPossible(ranks,mid,cars)) {
                    result = mid;
                    r = mid-1;
                } else {
                    l = mid+1;
                }
            }
            return result;
        }
    };
    int main() {
        solution s;
        vector<int> ranks = {4,2,3,1};
        int cars = 10;
        cout<<s.repairCars(ranks,cars)<<endl;
        return 0;
    }
           