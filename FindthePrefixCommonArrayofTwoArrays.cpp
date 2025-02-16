#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
class solution {
    public:
        vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
              int n = A.size();
        vector<int> prefixCommonArray(n, 0);
        unordered_set<int> seenA, seenB;
        int commonCount = 0;

        for (int i = 0; i < n; ++i) {
            seenA.insert(A[i]);
            seenB.insert(B[i]);

            if (seenB.count(A[i])) {
                ++commonCount;
            }

            if (seenA.count(B[i])) {
                ++commonCount;
            }

            prefixCommonArray[i] = commonCount;
        }

        return prefixCommonArray;
    }
};