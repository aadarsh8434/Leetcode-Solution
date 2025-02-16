#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        vector<int> finalPrices(vector<int>& prices) {
            int n = prices.size();
            vector<int> ans(n);
            for(int i=0;i<n;i++) {
                ans[i]=prices[i];
                for(int j=i+1;j<n;j++) {
                    if(prices[j]<=prices[i]) {
                        ans[i] = prices[i]- prices[j];
                        break;
                    }
                    // else {
                    //     ans[i] = prices[i];
                    //     break;
                    }
                }
            
            return ans;
        }
};
int main() {
    solution s;
    vector<int> prices = {8,4,6,2,3};
    vector<int> ans = s.finalPrices(prices);
    cout << "[";
    for(int i=0;i<ans.size();i++) {
        cout << ans[i];
        if(i!=ans.size()-1) {
            cout << ", ";
            }
            }
            cout << "]" << endl;
            return 0;
            
}