#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            const int n = tops.size();
            int X=tops[0], Y=bottoms[0];
            int swapXT=0, swapXB=0;
            int swapYT=0, swapYB=0;
            bool hasX=1, hasY=1;
            for (int i=0; i<n; i++) {
                if (hasX) {
                    if (tops[i]!=X && bottoms[i]!=X) 
                        hasX=0;
                    else {
                        if (tops[i]!=X) swapXT++;
                        if (bottoms[i]!=X) swapXB++;
                    }
                }
                if (hasY) {
                    if (tops[i]!=Y && bottoms[i]!=Y) 
                        hasY=0;
                    else {
                        if (tops[i]!=Y) swapYT++;
                        if (bottoms[i]!=Y) swapYB++;
                    }
                }
                if (!hasX && !hasY) return -1;
            }
            int ans=INT_MAX;
            if (hasX) ans=min(ans, min(swapXT, swapXB));
            if (hasY) ans=min(ans, min(swapYT, swapYB));
            return ans;
        }
    };
    int main() {
        Solution s;
        vector<int> tops={2,1,2,4,2,2};
        vector<int> bottoms ={5,2,6,2,3,2};
        cout<<s.minDominoRotations(tops,bottoms)<<endl;
        return 0;
    }    