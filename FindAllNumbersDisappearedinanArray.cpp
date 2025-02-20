#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            int n = nums.size();
            vector<int> result;

            for(int i = 0; i < n; i++) {
                int index = abs(nums[i]) - 1;
                if(nums[index] > 0) {
                    nums[index] = -nums[index];
                }
            }

            for(int i = 0; i < n; i++) {
                if(nums[i] > 0) {
                    result.push_back(i + 1);
                }
            }

            return result;
        }
};

int main() {
    solution s;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = s.findDisappearedNumbers(nums);

    cout << "Disappeared numbers: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
