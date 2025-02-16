#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int frequencyOfMostFrequent(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        int maxCount = 0;

        for (int num : nums) {
            freqMap[num]++;
            maxCount = max(maxCount, freqMap[num]);
        }

        return maxCount;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};
    int result = sol.frequencyOfMostFrequent(nums);
    cout << "Frequency of the most frequent element: " << result << endl;

    return 0;
    
}