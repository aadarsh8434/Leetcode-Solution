#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int insertionsort(vector<int>&arr) {
        int n = arr.size();
        for(int i=1;i<n;i++) {
            int key = arr[i];
            int j= i-1;
            while(j>=0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        return 0;

            }
        };
        int main() {
            solution s;
            vector<int>arr = {5,4,7,8,9};
            s.insertionsort(arr);
            for(int i=0;i<arr.size();i++) {
                cout<<arr[i]<<" ";
            }
            return 0;

            }
 