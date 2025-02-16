#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
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
     int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX;
        stack<TreeNode*> st;
        TreeNode* prev = nullptr;
        while (!st.empty() || root != nullptr) {
            while (root != nullptr) {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            if (prev != nullptr) {
                minDiff = min(minDiff, root->val - prev->val);
            }
            prev = root;
            root = root->right;
        }
        return minDiff;
     }        
  };
  int main() {
    solution s;
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    cout << s.minDiffInBST(root) << endl;
    return 0;
  }