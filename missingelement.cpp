#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
    int missingelement(vector<int>&arr) {
        int n = arr.size();
        int sum = (n*(n+1)/2);
        int sum1=0;
        for(int i=0;i<n-1;i++) {
            sum1 = sum1 + arr[i];
        }
        return sum - sum1;

        }
    };
int main() {
    solution s;
    vector<int> arr = {1,2,3,5};
    cout<<s.missingelement(arr)<<endl;
    return 0;
    
}