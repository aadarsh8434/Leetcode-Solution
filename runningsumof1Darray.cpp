#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            int sum=0;
            vector<int>res;
            for(int i=0;i<nums.size();i++) {
                sum+=nums[i];
                res.push_back(sum);
            }
            return res;
        }
};
int main() {
    solution s;
    vector<int>runningSum={4,5,6,3,2};
    

}