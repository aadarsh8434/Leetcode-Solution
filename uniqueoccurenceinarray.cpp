#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            int n = arr.size();
            unordered_map<int,int>mp;
            for(int i = 0; i < n; i++) {
                mp[arr[i]]++;
            }
            unordered_map<int,int>mp2;
            for(auto it = mp.begin(); it!= mp.end(); it++) {
                mp2[it->second]++;
            }
            return mp2.size() == mp.size();
            //return mp2.size()== unique_count(mp2);
        }
};
int main() {
    solution s;
    vector<int>arr = {1,2};
    cout<<s.uniqueOccurrences(arr)<<endl;
    return 0;
}

     