
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
       int findFloor(vector<int>& arr, int k) {
        int low=0, high=arr.size()-1;
        int ans=-1;
        while(low<=high) {
            int mid = (low+high)/2;
            // if(arr[mid]== k) {
            //     return arr[mid];
            // }
            if(arr[mid]<=k) {
                ans=mid;
                low=mid-1;
            }
            else {
                high=mid+1;
            }
        }
        return ans;
       }
};
int main() {
    solution s;
    vector<int>arr= { 2,5,3,8,9,4,6};
    int k=5;
    cout<<s.findFloor(arr,k)<<endl;
    return 0;
}
  