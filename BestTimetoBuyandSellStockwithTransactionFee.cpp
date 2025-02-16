#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        int maxProfit(vector<int>& prices, int fee) {
            int n = prices.size();
            int n = prices.size();
            if(n==0) return 0;
            int cash=0;
            int hold =-prices[0];
            for(int i=0;i<n;i++) {
                int newcash = max( cash,hold+prices[i]-fee);
                int newhold = max( hold,cash-prices[i]);
            }
            return cash;
        }
};
          