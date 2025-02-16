#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxSum;

    int solve(TreeNode* root) {
        if (root == nullptr) 
            return 0;
        int left = max(0, solve(root->left));
        int right = max(0, solve(root->right));
        int niche_hi_milega_answer = left + right + root->val;
        maxSum = max(maxSum, niche_hi_milega_answer);
        return max(left, right) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
};

int main() {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    cout << s.maxPathSum(root) << endl;
    return 0;
}
