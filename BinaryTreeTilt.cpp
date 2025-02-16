#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  class solution {
    public:
        int findTilt(TreeNode* root) {
            int tilt = 0;
            function<int(TreeNode*)> dfs = [&](TreeNode* node) {
                if (!node) return 0;
                int left = dfs(node->left);
                int right = dfs(node->right);
                tilt += abs(left - right);
                return node->val + left + right;
            };
            dfs(root);
            return tilt;
        };
  };
  
  }