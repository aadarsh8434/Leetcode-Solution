#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
     long long pickGifts(vector<int>& gifts, int k) {
        sort(gifts.begin(),gifts.end(),greater<int>());
        long long ans=0;
        for(int i=0;i<k && i<gifts.size();i++) {
            ans+=gifts[i];
        }
        return ans;
     }
};

 