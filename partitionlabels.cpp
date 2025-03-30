#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> result;
        vector<int>mp(26,-1);
        for(int i=0;i<n;i++) {
            int idx = s[i]-'a';
            mp[idx] = i;
        }
        int i=0;
        while(i<n) {
            int end= mp[s[i]-'a'];
            int j=i;
            while(j<end) {
                end = max(end,mp[s[j]-'a']);
                j++;
            }
            result.push_back(j-i+1);
            i=j+1;
        }
        return result;
    }
};
int main() {
    solution s;
    string str = "ababcbacadefegdehijhklij";
    vector<int> result = s.partitionLabels(str);
    cout << "Partition Labels: ";
    for(int i=0;i<result.size();i++) {
        cout << result[i] << " ";
        }
        cout << endl;
        return 0;
}