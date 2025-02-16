#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        int countGoodStrings(int low, int high, int zero, int one) {
            int res=0;
            for(int i=low;i<=high;i++) {
                int tmp=i;
                int cnt=0;
                while(tmp>0) {
                    if(tmp%10==0) cnt+=zero;
                    else cnt+=one;
                    tmp/=10;
                    if(cnt>i) break;
                }
                res+=cnt;
                }
                return res;

            }
};