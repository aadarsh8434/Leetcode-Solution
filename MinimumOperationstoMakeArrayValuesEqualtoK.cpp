#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums) {
            if(i<k) return -1;
            else if(i<k) mp[i]++;
        }
        return mp.size();
    }
};
int main() {
    solution s;
    vector<int>nums = {5,2,5,4,5};
    int k=2;
    cout<<s.minOperations(nums,k)<<endl;
    return 0;
}

 