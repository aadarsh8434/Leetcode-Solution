#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
class solution {
    public:
    int frequencyofarray(vector<int>&arr) {
        int n = arr.size();
        int max=INT_MAX;
        int min=INT_MIN;
        for(int i=0;i<n;i++) {
            if(arr[i]>max) {
                max=arr[i];
            }
            if(arr[i]<min) {
                min=arr[i];
            }
            }
            int count=0;
            for(int i=0;i<n;i++) {
                if(arr[i]==max) {
                    count++;
                }
            }
            int main() {
                solution sol;
                int arr[] = {1,4,6,3,3};
                int n = sizeof(arr)/sizeof(arr[0]);

            }

                }
            };

     