#include<iostream>
#include<stdio.h>
#include<vector>
#include<priority_queue>
using namespace std;
class solution {
    public:
     int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        vector<int>chairs(n,-1);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++) {
            pq.push({times[i][0],i});
            chairs[i]=i;
        }
        for(int i=0;i<n;i++) {
            int time = times[i][0];
            int friend = times[i][1];
            while(!pq.empty() && pq.top().first <= time) {
                int chair = pq.top().second;
                pq.top();
                pq.pop();
                chairs[chair] = -1;
                pq.push({times[chair][0],chair});
            }
            if(friend == targetFriend) {
                return chairs[friend];
            }
        }
        return -1;
     }
};
int main() {
    solution s;
    
}

      
