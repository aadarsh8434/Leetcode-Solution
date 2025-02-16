#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class solution {
    public:
       int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int,long> dp;
        long ans=0;
        for(int i=0;i<n;i++) {
            long count=0;
            for(int j=0;j<i;j++) {
                if(arr[i]%arr[j]==0 && dp.count(arr[i]/arr[j])) {
                    count += dp[arr[j]]*dp[arr[i]/arr[j]];
                }
            }
            dp[arr[i]]= count+1;
            ans= ans+dp[arr[i]];
        }
        return ans%(1000000007);
       }
};
int main() {
    solution s;
    vector<int> arr = {2,4,5,10};
    cout<<s.numFactoredBinaryTrees(arr)<<endl;
    return 0;
}
   
