#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
        string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
            int n = s.size();
            vector<vector<int>> graph(n);
            for(int i=0;i<pairs.size();i++) {
                graph[pairs[i][0]]. push_back(pairs[i][1]);
                graph[pairs[i][1]].push_back(pairs[i][0]);
            }
            vector<int> visited(n,0);
            vector<int> group(n,0);
            vector<int> groupsize(n,0);
            vector<int> groupstart(n,0);
            vector<int> groupend(n,0);
            vector<int>grouporder(n,0);
            int groupcnt=0;
            for(int i=0;i<n;i++) {
                if(visited[i]==0) {
                    groupcnt++;
                    dfs(i, graph,visited,group,groupsize,groupstart,groupend,grouporder);
                    sort(grouporder.begin(),grouporder.end());
                    for(int j=0;j<groupsize[groupstart[grouporder[0]]];j++)
                     {
                        s[j]=s[groupend[grouporder[0]]+j-groupstart[grouporder[0]]];
                        }
                        for(int j=0;j<groupsize[groupstart[grouporder[0]]];j++){
                            grouporder[j]=grouporder[j+1];
                            }
                            grouporder[groupsize[groupstart[grouporder[0]]]]=0;
                            }
                            }
                            return s;

                        }
                     };

      