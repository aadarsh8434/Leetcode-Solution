#include<iostream>
#include<vector>
#include<algorithm>
class solution {
    public:
      vector<long long> nextLargerElement(vector<long long> &arr, int n){
        vector<long long> ans(n,-1);
        stack<int>s;
        for(int i=n-1;i>=0;i--) {
            while(!s.empty() && arr[i]>=arr[s.top()]) {
                s.pop();
                }
                if(s.empty()) {
                    ans[i]=-1;
                    }
                    else {
                        ans[i]=arr[s.top()];
                        }
                        s.push(i);
                        }
                        return ans;

        }
};