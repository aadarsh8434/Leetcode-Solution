#include<iostream>
#include<cmath>
#include<queue>
#include<vector>
#include<stdio.h>
using namespace std;
class solution {
    public:
        long long maxKelements(vector<int>& nums, int k) {
            long long sum=0;
            priority_queue<int>pq(nums.begin().nums.end());
            while(k--) {
                int x=pq.top();
                pq.pop();
                sum+=x;
                x= ceil(x/3.0);
                pq.push(x);
            }
            return sum;
        }
};
int main() {
    solution s;
    vector<int> nums = {1, 2, 3, 4, 5}; // example input vector
    int k = 2; // example value for k
    long long result = s.maxKelements(nums, k);
    cout << "Maximum sum: " << result << endl;
    return 0;
}
                

