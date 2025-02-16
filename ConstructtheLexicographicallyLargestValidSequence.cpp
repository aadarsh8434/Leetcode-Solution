
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     vector<int> constructDistancedSequence(int n) {
        vector<int> result(2*n-1,0);
        vector<bool> visited(n+1,false);
        construct(result,visited,0,n);
        return result;
     }
        bool construct(vector<int>& result, vector<bool>& visited, int index, int n) {
            if(index==result.size()) {
                return true;
            }
            if(result[index]!=0) {
                return construct(result,visited,index+1,n);
            }
            for(int i=n;i>=1;i--) {
                if(visited[i]==true) {
                    continue;
                }
                if(i==1) {
                    result[index] = i;
                    visited[i] = true;
                    if(construct(result,visited,index+1,n)==true) {
                        return true;
                    }
                    result[index] = 0;
                    visited[i] = false;
                }
                else if(index+i<result.size() && result[index+i]==0) {
                    result[index] = i;
                    result[index+i] = i;
                    visited[i] = true;
                    if(construct(result,visited,index+1,n)==true) {
                        return true;
                    }
                    result[index] = 0;
                    result[index+i] = 0;
                    visited[i] = false;
                }
            }
            return false;
        }
};