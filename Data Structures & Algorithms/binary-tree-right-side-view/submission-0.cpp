/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void view(TreeNode* node, int l, vector<int>& res){
        if(!node) return;
        if(l == res.size()) res.push_back(node->val);
        view(node->right,l+1,res);
        view(node->left,l+1,res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        view(root,0,res);
        return res;
    }
};
