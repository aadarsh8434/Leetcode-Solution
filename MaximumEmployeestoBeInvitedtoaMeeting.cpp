
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<unordered_map>
using namespace std;
class solution {
    public:
    int bfs(int start, unordered_map<int>>&adj,vector<bool>&visited) {
        queue<pair<int,int>que;
        que.push({start,0});
        int maxDistance =0;
        while(!que.empty()) {
            auto[currNode,dist] =que.front();
            que.pop();
            for(auto &ngbr : adj[currNode]) {
                if(!visited[ngbr]) {
                    visited[ngbr] = true;
                    que.push({ngbr,dist+1});
                    maxDistance = max(maxDistance,dist+1);
                }
            }
        }
        return maxDistance;
            
    }
    int maximumInvitations(vector<int>& favorite) {
       int n = favorite.size();
       unordered_map<int,vector<int>> adj;
       for(int i=0;i<n;i++) {
        int u=i;
        int v= favorite[i];
        // u->v
        adj[v].push_back(u);
       }
       int longestCycleEmplCount=0;
       int happycoupleEmployeecount=0;
       vector<bool> visited(n,false);
       for(int i=0;i<n;i++) {
        if(!visited[i]) {
            unordered_map>int,int> mp;
            int currNode=i;
            int currNodecount=0;
            while(!visited[currNode]) {
                visited[currNode]=true;
                mp[currnode]=currNodecount;
                currnode=favorite[currnode];
                int nextNode = favorite[currNode];
                currNodecount++;
                if(mp.count(nextNode)) {
                    int cycleLength = currNodecount - mp[nextNode];
                    if(cycleLength==2) {
                        vector<bool> visitedNodes(n,false);
                        visitedNodes[currNode] =true;
                        visitedNodes[nextNode]=true;
                    happycoupleEmployeecount +=  2+ bfs(currNode,adj,visitedNodes) + bfs(nextNode,adj,visitedNodes);

                }
                break;
            }
            currNode = nextNode;
        }

       }
       }
       return max(happycoupleEmployeecount,longestCycleEmplCount);
    }
};