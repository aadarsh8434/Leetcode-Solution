#include<iostream>
using namespace std;

struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode* root) {
    if(root == NULL) {
        return;
    }
    cout << root->val << " ";    // Print the current node's value
    preorder(root->left);        // Recur on the left subtree
    preorder(root->right);       // Recur on the right subtree
}

int main() {
    // Creating the tree
    TreeNode* root = new TreeNode('A');
    root->left = new TreeNode('B');
    root->right = new TreeNode('C');
    root->left->left = new TreeNode('D');
    root->left->right = new TreeNode('E');
    
    // Preorder traversal
    preorder(root);
    
    return 0;
}
