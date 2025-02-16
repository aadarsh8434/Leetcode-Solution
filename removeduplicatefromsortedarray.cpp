#include<iostream>
#include<vector>
#include<unordered_set> // Include unordered_set for handling duplicates
using namespace std;

class Solution {
    public:
    void duplicateElement(vector<int>& arr) {
        unordered_set<int> s; // Set to store unique elements
        for(int i = 0; i < arr.size(); i++) {
            if(s.find(arr[i]) != s.end()) {
                cout << arr[i] << " ";  // Print the duplicate element
            } else {
                s.insert(arr[i]);  // Insert element into the set
            }
        }
        cout << endl;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 2, 4};  // Example array with duplicates
    Solution obj;
    obj.duplicateElement(arr);  // Find and print duplicates
    return 0;
}
