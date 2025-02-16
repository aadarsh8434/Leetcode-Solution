#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
// int main() {
//     int n=5;
//     int arr[5][2]={{1,2},{2,1},{3,4},{4,5},{5,4}};
//     unordered_map<int,int>mp;
//     cout<<"the symmetric pair are: "<<endl;
//     for(int i=0;i<n;i++) {
//         int first=arr[i][0];
//         int second=arr[i][1];

//         if(mp.find(second)!=mp.end() && mp[second]==first) {
//             cout<<"("<<first<<" "<<second<<")"<<" ";
//         }
//         else {
//             mp[first]=second;
//         }

//         }
//     }
//another approach
int main() {
    int n=5;
    int arr[][2]={{1,2},{2,1},{3,4},{4,5},{5,4}};
    cout<<"the symmetric pairs are:"<<endl;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i][0]==arr[j][1] && arr[i][1]==arr[j][0]) {
            cout << "(" << arr[i][1] << " " << arr[i][0] << ")" << " ";
            break;

            }
        }
    }
}




