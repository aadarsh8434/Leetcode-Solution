#include<iostream>
#include<cmath>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> res;
        if (n < m) {
            return res;
        }

        vector<int> pCount(26, 0), sCount(26, 0);
        for (char c : p) {
            pCount[c - 'a']++;
        }

        for (int i = 0; i < m; i++) {
            sCount[s[i] - 'a']++;
        }

        for (int i = m; i < n; i++) {
            if (pCount == sCount) {
                res.push_back(i - m);
            }
            sCount[s[i - m] - 'a']--;
            sCount[s[i] - 'a']++;
        }

        if (pCount == sCount) {
            res.push_back(n - m);
        }

        return res;
    }
};

           