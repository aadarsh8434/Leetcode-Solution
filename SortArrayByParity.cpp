
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class solution {
    public:
      vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]%2==0) {
                result.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++) {
            if(nums[i]%2!=0) {
                result.push_back(nums[i]);
            }
        }
        return result;
      }
};
int main() {
    solution s;
    vector<int> nums = {3,1,2,4};
    vector<int> result = s.sortArrayByParity(nums);
    for(int i=0;i<result.size();i++) {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
    }
