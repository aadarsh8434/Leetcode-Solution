#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class solution {
    public:
        int M = 1e9 + 7;
       int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int minvalue=0;
        long result=0;
        for(int i=0;i<n;i++) {
            minvalue =arr[i];
            for(int j=i;j<n;j++) {
                minvalue = min(minvalue,arr[j]);
                result += minvalue;
            }
        }
        return result;
       }
};
int main() {
    solution s;
    vector<int>arr = {38};
    cout<<s.sumSubarrayMins(arr)<<endl;

}