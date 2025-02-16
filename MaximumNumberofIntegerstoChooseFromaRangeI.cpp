#include<iostream>
#include<cmath>
#include<vector>
#include<Map>
#include<unordered_set>
using namespace std;
class solution {
    public:
       int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>st(begin(banned),end(banned));
        int count =0;
        int sum =0;
        for(int i=1;num<=n;i++) {
            if(banned.count(num)) {
                continue;
            }
            if(sum+num<=maxSum) {
                count++;
                sum+=num;
            } else {
                break;
            }
        }
        return count;
       }
};
            }
            }
            }
            if(bannedset.(find)!=bannesset.end()) {
                continue;
            }
            if(sum+i>maxsum) {
                break;
            }
            sum+=i;
            count++;
        }
        return count;
       }
};
            }
            }
            if(banned[i]==1) {
                sum+=i+1;
                count++;
            }
        }
        if(sum>maxSum) {
            return -1;
        }
        int left = 0;
        int right = count;
        while(left<right) {
            int mid = left+(right-left)/2;
            int newSum = sum;
            for(int i=0;i<n;i++) {
                if(banned[i]==0) {
                    newSum+=i+1;
                    if(newSum>maxSum) {
                        break;
                    }
                }
            }
            if(newSum<=maxSum) {
                right = mid;
            }
            else {
                left = mid+1;
            }
        }
        return right;
       }
};
            }
                }
            }
        }
        }
            }
        }
}