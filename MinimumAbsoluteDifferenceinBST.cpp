#include<iostream>
#include<vector>
#include<climits>
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
        int getMinimumDifference(TreeNode* root) {
            vector<int> res;
            dfs(root,res);
            sort(res.begin(),res.end());
            int min_diff = INT_MAX;
            for(int i=1;i<res.size();i++) {
                min_diff = min(min_diff,res[i]- res[i-1]);
            }
            return min_diff;
            }
            private:
            void dfs(TreeNode* node, vector<int>&res) {
                if(node== nullptr) return;
                res.push_back(node->val);
                dfs(node->left,res);
                dfs(node->right,res);
            }
            };
            void deleteTree(TreeNode* node) {
    if (node == nullptr) return; 
    deleteTree(node->left); 
    deleteTree(node->right); 
    delete node; 
}
            int main() {
                solution s;
                TreeNode* root = new TreeNode(4);
                root->left = new TreeNode(2);
                root->right = new TreeNode(6);
                root->left->left = new TreeNode(1);
                root->left->right = new TreeNode(3);
                cout<<s.getMinimumDifference(root)<<endl;
                int minDiff = s.getMinimumDifference(root);
                cout<< "minimum difference:"<<minDiff<<endl;
             return 0;   
            }
  