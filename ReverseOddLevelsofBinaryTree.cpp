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
        TreeNode* reverseOddLevels(TreeNode* root) {
            if(root == nullptr) return root;
            vector<TreeNode*> level;
            level.push_back(root);
            int levelNum =0;
            while(!level.empty()) {
                if(levelNum % 2 ==1) {
                    for(int i = 0; i < level.size(); i++) {
                        if(level[i]->left != nullptr) level.push_back(level[i]->left);
                        if(level[i]->right != nullptr) level.push_back(level[i]->right);
                        swap(level[i]->left, level[i]->right);
                    }
                }
                else {
                    for(int i = 0; i < level.size(); i++) {
                        if(level[i]->left != nullptr) level.push_back(level[i]->left);
                        if(level[i]->right != nullptr) level.push_back(level[i]->right);
                    }
                    level.clear();
                }
                levelNum++;
            }
            return root;
        }
  };
                }
                }
            }
  }