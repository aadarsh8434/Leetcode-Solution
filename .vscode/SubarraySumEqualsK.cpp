#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int sum =0, count=0;
            unordered_map<int,int> mp;
            for(int i=0;i<nums.size();i++) {
                sum+=nums[i];
                if(sum==k) {
                    count++;
                }
                if(mp.find(sum-k)!=mp.end()) {
                    count+=mp[sum-k];
                }
                mp[sum]++;
            }
            return count;
        }
};
int main() {
    solution s;
    vector<int> nums = {1,1,1};
    int k=2;
    cout<<s.subarraySum(nums,k)<<endl;
    
}