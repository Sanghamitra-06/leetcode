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
    bool isValidBST(TreeNode* root) {
        return isValidBST(root,LONG_MAX,LONG_MIN);
        
    }
    bool isValidBST(TreeNode* root,long maxval,long minval){
        if(root==nullptr) return true;
        if(root->val>=maxval || root->val<=minval) return false;
        return  isValidBST(root->left,root->val,minval) &&  isValidBST(root->right,maxval,root->val);
    }

};