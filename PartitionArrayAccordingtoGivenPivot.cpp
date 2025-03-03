#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left, right, equal;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<pivot) {
                left.push_back(nums[i]);
            }
            else if(nums[i]>pivot) {
                right.push_back(nums[i]);
            }
            else {
                equal.push_back(nums[i]);
            }
        }
        left.insert(left.end(), equal.begin(), equal.end());
        left.insert(left.end(), right.begin(), right.end());
        return left;
     }
};
int main() {
    solution s;
    vector<int> nums = {9,12,5,10,14,3,10};
    int pivot =10;
    vector<int> result = s.pivotArray(nums, pivot);
    cout<<"[";
    for(int i=0;i<result.size();i++) {
        cout<<result[i];
        if(i!=result.size()-1) {
            cout<<", ";
            }
            }
            cout<<"]";
            return 0;
}