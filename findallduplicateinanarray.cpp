#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class solution {
public:
    vector<int> findduplicates(vector<int>& nums) {
        unordered_set<int> set;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            if(set.find(nums[i]) != set.end()) {
                res.push_back(nums[i]);
            }
            else {
                set.insert(nums[i]);
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {4, 3, 2, 4, 2, 3,7};
    solution s;
    vector<int> res = s.findduplicates(nums);
    
    for(int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}