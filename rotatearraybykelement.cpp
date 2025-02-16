#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
class solution{
    public:
    int rotatedbyk(vector<int>&arr,int k) {
        int n = arr.size();
        k=k%n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());


    }
};
int main() {
    solution obj;
    vector<int>arr={1,2,3,4,5,6};
    int k=3;
    obj.rotatedbyk(arr,k);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}