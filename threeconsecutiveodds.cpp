#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
    for(int i=0;i<n-2;i++) {
    if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1) {
    return true;
    }
    }
    return false;
    }
    };   
    int main() {
        Solution s;
        vector<int> arr = {2,6,4,1};
        cout<<s.threeConsecutiveOdds(arr)<<endl;
        return 0;
    }    