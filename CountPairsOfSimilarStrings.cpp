#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int similarPairs(vector<string>& words) {
        int n = words.size();
        vector<int> hash(n);
        for(int i=0;i<n;i++) {
            int hashValue=0;
            for(int j=0;j<words[i].size();j++) {
                hashValue += (int)words[i][j];
            }
            hash[i] = hashValue;
        }
        sort(hash.begin(), hash.end());
        int count = 0;
        for(int i=0;i<n-1;i++) {
            if(hash[i] == hash[i+1]) {
                count++;
            }
        }
        return count;
    }
};
  