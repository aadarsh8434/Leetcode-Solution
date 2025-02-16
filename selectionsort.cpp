#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    vector<int> selectionsort(vector<int>&arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++) {
            int minindex = i;
            for(int j=i+1;j<n;j++) {
                if(arr[j]<arr[minindex]) {
                    minindex=j;
                }
            }
            swap(arr[i],arr[minindex]);
        }
        return arr;
    }
};
int main() {
    solution s;
    vector<int> arr = {64,25,12,22,11};
    vector<int> result = s.selectionsort(arr);
    return 0;
}