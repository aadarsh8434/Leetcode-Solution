#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
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
class solution {
    public:
        vector<int> postorder(Node* root) {
         vector<int>res;
         if(root==NULL) 
            return res;
            stack<Node*>s;
            s.push(root);
            while(!s.empty()) {
                Node* curr = s.top();
                s.pop();
                res.push_back(curr->val);
                for(Node* child:curr->children) {
                    if(child!=NULL) {
                        s.push(child);
                    }
                    }
                }
                reverse(res.begin(),res.end());
                return res;

            }
};

        

