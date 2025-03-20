#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> parent;
    vector<int> depth;

    vector<int> minimumCost(int n, vector<vector<int>>& edges,
                            vector<vector<int>>& queries) {

        parent.resize(n, -1);
        depth.resize(n, 0);

        vector<unsigned int> componentCost(n, -1);

        for (auto& edge : edges) {
            Union(edge[0], edge[1]);
        }

        for (auto& edge : edges) {
            int root = find(edge[0]);
            componentCost[root] &= edge[2];
        }

        vector<int> answer;
        for (auto& query : queries) {
            int start = query[0];
            int end = query[1];

            if (find(start) != find(end)) {
                answer.push_back(-1);
            } else {
                int root = find(start);
                answer.push_back(componentCost[root]);
            }
        }
        return answer;
    }

private:
    int find(int node) {
        if (parent[node] == -1)
            return node;
        return parent[node] = find(parent[node]);
    }

    void Union(int node1, int node2) {
        int root1 = find(node1);
        int root2 = find(node2);

        if (root1 == root2)
            return;

        if (depth[root1] < depth[root2])
            swap(root1, root2);

        parent[root2] = root1;

        if (depth[root1] == depth[root2])
            depth[root1]++;
    }
};

int main() {
    Solution s;

    vector<vector<int>> edges = {{0, 1, 10}, {1, 2, 10}, {0, 2, 10}, {0, 3, 10}, {1, 3, 10}, {2, 3, 10}};
    vector<vector<int>> queries = {{0, 3}, {3, 4}};
    
    // Determine the number of nodes dynamically
    int n = 0;
    for (auto& e : edges) {
        n = max(n, max(e[0], e[1]) + 1);
    }
    for (auto& q : queries) {
        n = max(n, max(q[0], q[1]) + 1);
    }

    vector<int> result = s.minimumCost(n, edges, queries);

    cout << "Query Results: ";
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}
