#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;
class solution {
    public:
      int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i =0;i<piles.size();i++) {
            pq.push(piles[i]);
        }
        int sum=0;
        while(k>0) {
            int top =  pq.top();
            pq.pop();
            if(top%2==0) {
                pq.push(top/2);
                sum=top/2;
            }
            else {
                pq.push(top/2);
                sum=top/2;
            }
            k--;
        }
        return sum;
      }
};

            }
            }
        }
        }

}