#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
      int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int partitions=0;
        int left=0;
        for(int right=0;right<nums.size();right++) {
            if(nums[right]-nums[left]>k) {
                partitions++;
                left=right;
            }
        }
        partitions++;
        return partitions;
      }
};

            }

        }
        int right=0;
        while(right<nums.size()) {

        }
      }

        };