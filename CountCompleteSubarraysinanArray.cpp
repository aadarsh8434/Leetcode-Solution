#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int countCompleteSubarrays(vector<int>& nums) {
            int n = nums.size();
            set<int> st;
            for (int i = 0; i < n; i++) {
                st.insert(nums[i]);
            }
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                set<int> temp;
                for (int j = i; j < n; j++) {
                    temp.insert(nums[j]);
                    if (temp.size() == st.size()) {
                        cnt++;
                    }
                }
            }
            return cnt;
        }
    };
    int main() {
        Solution s;
        vector<int>nums = {1,3,1,2,2};
        cout<<s.countCompleteSubarrays(nums)<<endl;
        //s.countCompleteSubarrays(nums)<<endl;
        return 0;
    }    