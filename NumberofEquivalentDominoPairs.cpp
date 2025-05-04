#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count=0;
        int n = dominoes.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int a= dominoes[i][0],b= dominoes[i][1];
                int c= dominoes[j][0], d= dominoes[j][1];
                if((a==c && b==d) || (a==d && b==c)) 
                    ++count;
                }
            }
                return count;
            }
        };
        int main() {
            solution s;
            vector<vector<int>> dominoes={{1,2},{2,1},{3,4},{5,6}};
            cout<<s.numEquivDominoPairs(dominoes)<<endl;
            return 0;
        }
