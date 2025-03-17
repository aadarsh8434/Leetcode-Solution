#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
        }
        for(auto it:m)  {
            if(it.second%2!=0) return false;
        }
        return true;
    }
};
int main() {
    solution s;
    vector<int> nums = {3,2,3,2,2,2};
    cout<<s.divideArray(nums)<<endl;
    return 0;
}

     