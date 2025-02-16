#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
class solution {
    public:
      vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL) return {};
        vector<vector<int>> res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++) {
                Node* node = q.front();
                q.pop();
                level.push_back(node->val);
                for(Node* child: node->children) {
                    q.push(child);
                }
            }
            res.push_back(level);
        }
        return res;
      }
};
int main() {
    return 0;
}