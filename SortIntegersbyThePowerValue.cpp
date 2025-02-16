#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        int getKth(int lo, int hi, int k) {
            int mid = (lo+hi)/2;
            if(lo==hi) {
                return lo;
            }
            int left=0,right=0;
            for(int i=lo;i<=mid;i++) {
                if(i%2==0) {
                    left++;
                }
                else {
                    right++;
                }
            }
            if(k<=left) {
                return getKth(lo,mid,k);
            }
            else if(k>left+right) {
                return getKth(mid+1,hi,k-left-right);
            }
            else {
                return mid;
            }
        }
};

            }
            }
            }
                }
                }
            }
            }
}