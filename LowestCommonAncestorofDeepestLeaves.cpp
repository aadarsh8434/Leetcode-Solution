#include<bits/stdc++.h>
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
        int maxDepth(TreeNode* root) {
            if (!root)
                return 0;
            return 1 + max(maxDepth(root->left), maxDepth(root->right));
        }
    
        TreeNode* lcaDeepestLeaves(TreeNode* root) {
            if (!root)
                return nullptr;
            
            int leftDepth = maxDepth(root->left);
            int rightDepth = maxDepth(root->right);
            
            if (leftDepth == rightDepth)
                return root;
            else if (leftDepth > rightDepth)
                return lcaDeepestLeaves(root->left);
            else
                return lcaDeepestLeaves(root->right);
        }
    };
    int main() {
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->left = new TreeNode(4);
        root->left->right = new TreeNode(5);
        root->right->right = new TreeNode(6);
        solution s;
        cout << s.lcaDeepestLeaves(root)->val << endl;
        return 0;

    }    