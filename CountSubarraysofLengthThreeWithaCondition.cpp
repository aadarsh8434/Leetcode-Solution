#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int countSubarrays(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            if ((nums[i] + nums[i + 2]) * 2 == nums[i + 1])
                res++;
        }
        return res;
    }
};
int main() {
    solution s;
    vector<int>nums= {1,2,1,4,1};
    cout<<s.countSubarrays(nums)<<endl;
    return 0;
}