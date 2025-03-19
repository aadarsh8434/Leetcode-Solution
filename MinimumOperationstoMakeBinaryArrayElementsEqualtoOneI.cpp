#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int minOperations(vector<int>& nums) {
            deque<int> flipQueue;
            int count = 0;
    
            for (int i = 0; i < nums.size(); i++) {
                while (!flipQueue.empty() && i > flipQueue.front() + 2) {
                    flipQueue.pop_front();
                }
    
                if ((nums[i] + flipQueue.size()) % 2 == 0) {
                    if (i + 2 >= nums.size()) {
                        return -1;
                    }
                    count++;
                    flipQueue.push_back(i);
                }
            }
    
            return count;
        }
    };
    int main() {
        Solution s;
        vector<int> nums = {0,1,1,1,0,0};
        cout << s.minOperations(nums) << endl;
        return 0;
    }