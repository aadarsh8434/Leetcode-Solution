#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> seen;
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (!seen.insert(nums[i]).second) {
                return (i + 1 + 2) / 3; 
            }
        }
        return 0;
    }
};
int main() {
    solution s;
    vector<int> nums = {1,2,3,4,2,3,3,5,7};
    cout << s.minimumOperations(nums) << endl;
    return 0;
}