#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
      bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int left=0;
        int n = arr.size();
        int right =n-1;
        while(left<right) {
            int sum = arr[left]+arr[right];
            if(sum==target) {
                return true;
            }
            else if(sum<target) {
                left++;
            }
            else {
                right--;
            }
        }
        return false;
      }
};
int main() {
    solution s;
    vector<int> arr = {2,3,4,5,6,7};
    int target = 9;
    cout<<s.twoSum(arr,target)<<endl;
    return 0;
}