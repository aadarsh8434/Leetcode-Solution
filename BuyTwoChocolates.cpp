#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
      int buyChoco(vector<int>& prices, int money) {
        int minPrice = INT_MAX;
        int secondMinPrice = INT_MAX;
         for (int price : prices) {
            if (price < minPrice) {
                secondMinPrice = minPrice;
                minPrice = price;
            } else if (price < secondMinPrice) {
                secondMinPrice = price;
            }
        }
         if (minPrice + secondMinPrice <= money) {
            return money - (minPrice + secondMinPrice);
        }
             return money;
    }
};
      