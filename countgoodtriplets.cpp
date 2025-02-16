#include<iostream>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n =arr.size();
        int count=0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                for(int k=j+1;k<n;k++) {
                    if(arr[i]<a || arr[j]<b || arr[k]<c) {
                        continue;
                    }
                    if(arr[i]>a && arr[j]>b && arr[k]>c) {
                        count++;
                    }
                }
            }
        }
        return count;

                    }
                };
            }
        }