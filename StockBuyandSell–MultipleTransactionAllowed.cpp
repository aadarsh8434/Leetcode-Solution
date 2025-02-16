#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        if(n<2) {
            return 0;
        }
        int buy = -prices[0];
        int sell =0;
        for(int i=1;i<n;i++) {
            int newBuy = max( buy, sell- prices[i]);
            int newsell = max( sell, buy+prices[i]);
            buy = newBuy;
            sell = newsell;
        }
        return sell;

        }
        };
        int main() {
            solution s;
            vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
            cout<<s.maximumProfit(prices)<<endl;

        }
