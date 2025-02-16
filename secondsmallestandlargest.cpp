#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int secondlargestandsmallest(int arr[],int n) {
        if(n==0 || n==1) {
            cout<<1<<" "<<-1<<endl;
        }
        int smallest=INT_MAX,secondsmallest=INT_MAX;
        int largest=INT_MIN,secondlargest=INT_MIN;
        int i;
        for(int i=0;i<n;i++) {
            int small=min(small,arr[i]);
            int large=max(large,arr[i]);
            if(arr[i]<secondsmallest && arr[i]!=small) {
                secondsmallest=arr[i];
            if(arr[i]>secondlargest && arr[i]!=largest) {
                secondlargest=arr[i];
            }
            }
        }
        cout<<"second smallest is"<<secondsmallest<<endl;
        cout<<"second largest is"<<secondlargest<<endl;
            }
        int main() {
            int arr[]={4,5,6,8,9,3};
            int n=sizeof(arr)/sizeof(arr[0]);
            secondlargestandsmallest(arr,n);
        }
};
        

