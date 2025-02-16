#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<unordered_map>
#include<vector>
using namespace std;
class solution {
    public:
    int frequencyofarray(vector<int>&arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }
        int max=0;
        for(auto it=mp.begin();it!=mp.end();it++) {
            if(it->second>max) {
                max=it->second;
            }

        int main() {
           int arr[]={5,6,7,8,9};
           int n=sizeofarr[]/sizeofarr[0];
           vector<int>arr1(arr,arr+n);
           solution obj;
           cout<<obj.frequency<<endl;
        }
        }
    }
}


    
    