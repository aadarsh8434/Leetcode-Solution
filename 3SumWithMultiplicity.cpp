
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int threeSumMulti(vector<int>& arr, int target) {
            int n = arr.size();
            int mod = 1e9+7;
            unordered_map<int,int>mp;
            long long ans=0;
            for(int i=0;i<n;i++) {
                for(int j=i+1;j<n;j++) {
                    int sum = target-arr[i]-arr[j];
                    if(mp.find(sum)!=mp.end()) {
                        ans = (ans+mp[sum])%mod;
                    }
                }
                mp[arr[i]]++;
            }
            return ans;
        }
};
int 
                    }
                }
            }
            sort(arr.begin(),arr.end());
            long long ans=0;
            for(int i=0;i<n;i++) {
                int l =i+1, r=n-1;
                while(l<r) {
                    long long sum = arr[i]+arr[l]+arr[r];
                    if(sum==target) {

                        ans = (ans+1)%mod;
                        l++;
                        r--;
                    }
                    else if(sum<target) l++;
                    else r--;
                }
            }
            return ans;
        }
};
                    }
                }
                }
            }
}