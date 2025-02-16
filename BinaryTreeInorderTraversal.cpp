#include<iostream>
#include<cmath>
#include<string>
#include<vector>
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
     vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == nullptr) return res;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while(cur != nullptr || !st.empty()) {
            while(cur!=nullptr) {
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            res.push_back(cur->val);
            cur = cur->right;
        }
        return res;
     }
  };
int main() {
    //return 0;
    solution s;
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    vector<int> res = s.inorderTraversal(root);
    cout<<res[0]<<endl;
    
}