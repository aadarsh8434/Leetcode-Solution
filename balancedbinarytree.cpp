#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
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
        bool isBalanced(TreeNode* root) {
            if(root == NULL) return true;
            int left_height = get_height(root->left);
            int right_height = get_height(root->right);
            if(abs(left_height - right_height) > 1) return false;
            return isBalanced(root->left) && isBalanced(root->right);
        }
         int get_height(TreeNode* root) {
            if(root == NULL) return 0;
             return max(get_height(root->left), get_height(root->right)) + 1;
         }
        };
  //};
  int main() {
    solution s;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout<<s.isBalanced(root)<<endl;
    return 0;
  }