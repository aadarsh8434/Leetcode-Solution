
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        bool check(vector<int>& nums) {
            int n = nums.size();
            int count=0;
            for(int i=0;i<n;i++) {
                if(nums[i]==0) count++;
                else if(count>0) {
                    count--;
                    }
                    }
                    return count==0;
        }
};
int main() {
    solution s;
    vector<int>&nums ={12,13,14,15,16};
    
}
