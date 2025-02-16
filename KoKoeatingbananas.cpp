
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int n = piles.size();
            int l=1, r=1e9;
            while(l<r) {
                int mid = l+(r-l)/2;
                int time=0;
                for(int i=0;i<n;i++){
                    time += (piles[i]+mid-1)/mid;
                }
                if(time>h) l=mid+1;
                else r=mid;
            }
            return l;
        }
};
int main() {
    solution s;
    vector<int> piles= {3,6,7,11};
    int h=8;
    cout<<s.minEatingSpeed(piles,h);
    return 0;
}