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
    int count=0;
    int solve(TreeNode* node){
        if(node==nullptr) return 0;
        int v=node->val;
        int l=INT_MIN,r=INT_MIN;
        if(node->left)
        l=max(l,solve(node->left));
        if(node->right)
        r=max(r,solve(node->right));
        if(max(l,r)<=v) count++;
        return max(v,max(l,r));
    }
    int countDominantNodes(TreeNode* root) {
        solve(root);
        return count;
    }
};