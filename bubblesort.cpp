#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
class solution {
    public:
    int bubblesort(vector<int>&arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-i-i;j++) {
                if(arr[j]>arr[j+1]) {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        return 0;

        }

    };
int main() {
    solution s;
    vector<int> arr = {12,15,41,32,21,25};
    s.bubblesort(arr);
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<< " ";
    }

    }
  