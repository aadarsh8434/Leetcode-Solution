#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class solution {
public:
    void countduplicatearray(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for (int num : nums) {
            freq[num]++;
        }

        cout << "Duplicates and their counts:" << endl;
        for (const auto& pair : freq) {
        
                cout << "Number: " << pair.first << ", Duplicated: " << pair.second - 1 << " times" << endl;
            }
        }
    
};

int main() {
    vector<int> nums = {1, 5, 5, 8, 9, 3, 4, 6, 9, 9};
    solution s;
    s.countduplicatearray(nums);
    return 0;
}
