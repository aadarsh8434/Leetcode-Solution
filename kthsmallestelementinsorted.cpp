
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int kthSmallest(vector<vector<int>>& matrix, int k) {
            int n = matrix.size();
            int m = matrix[0].size();
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int i=0;i<n;i++) {
                for(int j=0;j<m;j++) {
                    pq.push(matrix[i][j]);
                }
            }
            int count=0;
            int ans=0;
            while(!pq.empty()) {
                ans= pq.top();
                pq.pop();
                count++;
                if(count==k) {
                    return ans;
                }
            }
            return -1;
        }
};
int main() {
    solution s;
    vector<vector<int>> matrix = {{1,5,9},{10,11,13},{12,13,15}};
    int k=8;
    cout<<s.kthSmallest(matrix,k)<<endl;
    return 0;
}