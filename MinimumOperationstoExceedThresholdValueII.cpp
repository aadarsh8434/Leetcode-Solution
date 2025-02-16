
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<long,vector<long>,greater<long>> pq(begin(nums),end(nums));
            int count=0;
        while(!pq.empty() && pq.top()<k) {
            int smallest = pq.top();
            pq.pop();
            int secondsmallest = pq.top();
            pq.pop();
            pq.push(smallest*2 + secondsmallest);
            count++;
        }
        return count;
        }
};
int main() {
    solution ss;
    vector<int> nums = {1,2,3,4};
    int k=11;
    cout<<ss.minOperations(nums,k);
    return 0;
}

