#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        for (int &x : answers) {
            mp[x]++;
        }
        int total = 0;
        for (auto &it : mp) {
            int x = it.first;
            int count = it.second;
            int groupsize = x + 1;
            int groups = ceil((double)count / groupsize);
            total += groups * (groupsize);
        }
        return total;
    }
};
int main() {
    solution s;
    vector<int> v = {1,1,2};
    cout << s.numRabbits(v) << endl;
    return 0;
}
