#include<iostream>
#include<vector>
#include<algorithm>
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
        int findBottomLeftValue(TreeNode* root) {
            int res=0;
            vector<int>v;
            dfs(root,v,0);
            return v[v.size()-1];
        }
        void dfs(TreeNode* root,vector<int>&v, int level) {
            if(root==nullptr) return;
            if(root->left==nullptr && root->right==nullptr) {
                v.push_back(root->val);
            }
            dfs(root->left,v,level+1);
            dfs(root->right,v,level+1);
        }
  };

    