#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int MOD = 1e9 + 7;

        // Build adjacency list
        vector<vector<pair<int, int>>> graph(n);
        for (auto& road : roads) {
            int startNode = road[0], endNode = road[1], travelTime = road[2];
            graph[startNode].emplace_back(endNode, travelTime);
            graph[endNode].emplace_back(startNode, travelTime);
        }

        // Min-Heap (priority queue) for Dijkstra
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> minHeap;

        // Store shortest time to each node
        vector<long long> shortestTime(n, LLONG_MAX);
        vector<int> pathCount(n, 0);

        shortestTime[0] = 0;    // Distance to source is 0
        pathCount[0] = 1;       // 1 way to reach node 0

        minHeap.emplace(0, 0);  // {time, node}

        while (!minHeap.empty()) {
            long long currTime = minHeap.top().first;
            int currNode = minHeap.top().second;
            minHeap.pop();

            if (currTime > shortestTime[currNode]) continue;

            for (auto& [neighborNode, roadTime] : graph[currNode]) {
                if (currTime + roadTime < shortestTime[neighborNode]) {
                    shortestTime[neighborNode] = currTime + roadTime;
                    pathCount[neighborNode] = pathCount[currNode];
                    minHeap.emplace(shortestTime[neighborNode], neighborNode);
                } 
                else if (currTime + roadTime == shortestTime[neighborNode]) {
                    pathCount[neighborNode] = (pathCount[neighborNode] + pathCount[currNode]) % MOD;
                }
            }
        }

        return pathCount[n - 1];
    }
};

int main() {
    int n = 5, m = 6;

    // Define roads in {u, v, time} format
    vector<vector<int>> roads = {
        {0, 1, 1},
        {0, 2, 2},
        {1, 2, 1},
        {1, 3, 3},
        {2, 4, 1},
        {3, 4, 2}
    };

    Solution solution;
    cout << "Number of ways to reach node " << n - 1 << " = " << solution.countPaths(n, roads) << endl;

    return 0;
}
