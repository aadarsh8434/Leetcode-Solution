#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class solution {
    public:
        int findFinalValue(vector<int>& nums, int original) {
            unordered_set<int>numset(nums.begin(),nums.end());
            while(numset.find(original)!=numset.end()) {
                            original *= 2;
            }
            return original;
        }
};
