#include<iostream>
#include<vector>
#include<cmath>
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
     vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == nullptr) return res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            res.push_back(node->val);
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
     return res;
     }
 };
 int main() {
    solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    vector<int> res = s.preorderTraversal(root);
    cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<" "<<res[3];
    //Preorder Traversal of a Binary Tree;

 }