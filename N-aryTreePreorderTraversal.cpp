#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
class solution{
    public:
        vector<int> preorder(Node* root) {
vector<int>res;
preorderhelper(root,res);
return res;
        }
        private:
        void preorderhelper(Node* node,vector<int>&res) {
            if(node== nullptr) return ;
            res.push_back(node->val);
            for(auto child:node->children) {
                preorderhelper(child,res);
            }
            }
         };