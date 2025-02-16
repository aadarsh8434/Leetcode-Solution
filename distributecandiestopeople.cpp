
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        vector<int> distributeCandies(int candies, int num_people) {
      vector<int> result(num_people, 0);
        int index = 0, candyToGive = 1;
        while (candies > 0) {
            result[index] += min(candies, candyToGive);
            candies -= candyToGive;
            candyToGive++;
            index = (index + 1) % num_people;
        }
        return result;
    }
};
int main() {
    solution s;
    vector<int> result  = s.distributeCandies(10,3);
    for(int i=0;i<result.size();i++) {
        cout<<result[i]<<" ";
    }
    return 0;
    }
