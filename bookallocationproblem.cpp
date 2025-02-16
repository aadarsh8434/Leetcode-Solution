#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    int bookallocation(vector<int>&nums) {
        int n = nums.size();
        int max=0;
        int sum=0;
        for(int i=0;i<n;i++) {
            sum+=nums[i];
            max = max>sum?max:sum;
        }
        return max;
        }
    };
  int main() {
    solution s;
    vector<int>nums={1,2,3,4,5};
    cout<<s.bookallocation(nums)<<endl;

  }