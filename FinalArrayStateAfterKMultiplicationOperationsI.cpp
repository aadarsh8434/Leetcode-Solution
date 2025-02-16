#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
            int n = nums.size();
            vector<pair<int,int>>vec(n);
            for(int i=0;i<n;i++) {
                vec[i] = {nums[i],i};
            }
            make_heap(begin(vec),end(vec),greater<>());
            while(k--) {
                pop_heap(begin(vec),end(vec),greater<>());
                pair<int,int> temp = vec.back();
                vec.pop_back();
                int idx = temp.second;
                int number  = temp.first;
                nums[idx] = number* multiplier;
                vec.push_back({nums[idx],idx});
                nums[idx] *= multiplier;
                vec.push_back({nums[idx],idx});
                push_heap(begin(vec),end(vec),greater<>());
                //vec[idx] = {nums[idx],idx};
            }
            return nums;
        }
};


            }

                vec[i].second =i;

            }

            vector<int> result(n,0);
            for(int i=0;i<n;i++) {
                result[i] = (nums[i] * multiplier) % k;
                if(result[i] < 0) result[i] += k;
                }
                return result;

            }
};