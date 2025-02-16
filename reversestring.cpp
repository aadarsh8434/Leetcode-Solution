
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    void reverseString(vector<char>& s) {
        int left=0, right=s.size()-1;
        while(left<right) {
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};
 int main() {
    solution s;
    vector<int> str = {'h','e','l','l','o'};
    s.reverseString(str);
    for(int i=0;i<str.size();i++) {
        cout<<str[i]<<" ";
    }
 }