#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            if (nums[left] + nums[right] < target) {
                count += (right - left);
                left++;
            } else {
                right--;
            }
        }

        return count;
    }
};
int main() {
    Solution s;
    vector<int> nums ={1,2,3,4,5};
    int target = 7;
    cout<< s.countPairs(nums,target)<<endl;
    return 0;
    

}
