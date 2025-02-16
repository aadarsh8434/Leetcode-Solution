#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<map>
using namespace std;
class solution {
    public:
        vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
            vector<int> res(queries.size(),-1);
            vector<int>ans;
            dfs(root,queries,res,ans);
            return res;
        }

};