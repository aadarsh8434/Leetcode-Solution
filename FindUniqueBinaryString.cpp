#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            int n  = nums.size();
            string result = "";
            for(int i=0;i<n;i++) {
                if(nums[i][i]=='0') {
                    result.push_back('1');
                } else {
                    result.push_back('0');
                }
            }
            return result;
        }
};
int main() {
   solution s;
   vector<string> nums = {"01","10"};
   cout<<s.findDifferentBinaryString(nums)<<endl;
   return 0;
}

   