#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
      int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
       int n = amount.size(), maxIncome = INT_MIN;
        tree.resize(n);
        visited.assign(n, false);
        
        for (const vector<int>& edge : edges) {
            tree[edge[0]].push_back(edge[1]);
            tree[edge[1]].push_back(edge[0]);
        }

        findBobPath(bob, 0);

        queue<vector<int>> nodeQueue;
        nodeQueue.push({0, 0, 0});
        visited.assign(n, false);  
        
        while (!nodeQueue.empty()) {
            auto current = nodeQueue.front();
            nodeQueue.pop();
            int sourceNode = current[0], time = current[1], income = current[2];
            
            visited[sourceNode] = true;

            if (bobPath.find(sourceNode) == bobPath.end() || time < bobPath[sourceNode]) {
                income += amount[sourceNode]; 
            } 
            else if (time == bobPath[sourceNode]) {
                income += (amount[sourceNode] / 2); 
            }
            
            if (tree[sourceNode].size() == 1 && sourceNode != 0) {
                maxIncome = max(maxIncome, income);
            }
            
            for (int adjacentNode : tree[sourceNode]) {
                if (!visited[adjacentNode]) {
                    nodeQueue.push({adjacentNode, time + 1, income});
                    visited[adjacentNode] = true; 
                }
            }
        }
        
        return maxIncome;
    }

private:
    unordered_map<int, int> bobPath;  
    vector<bool> visited;             
    vector<vector<int>> tree;         

    bool findBobPath(int sourceNode, int time) {
        bobPath[sourceNode] = time;
        visited[sourceNode] = true;

        if (sourceNode == 0) return true;

        for (int adjacentNode : tree[sourceNode]) {
            if (!visited[adjacentNode]) {
                if (findBobPath(adjacentNode, time + 1)) {
                    return true;
                }
            }
        }

        bobPath.erase(sourceNode);
        return false;
    }
};
int main() {
   solution s;
   vector<vector<int>> edges = {
        {0, 1}, {1, 2}, {1, 3}, {3, 4}
    };
    int bob = 4;
    vector<int> amount = {3, 2, 1, 10, 5};
    
    int result = s.mostProfitablePath(edges, bob, amount);
    cout << "Maximum Profit: " << result << endl;
    
    return 0;
} 
