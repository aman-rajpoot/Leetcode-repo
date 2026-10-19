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
bool check(TreeNode*right,TreeNode*left){
    if(right==NULL && left==NULL){
        return true;
    }
    if(right==NULL || left==NULL){
        return false;
    }
    if(right->val!=left->val){
        return false;
    }
    return check(right->left, left->right) && check(right->right, left->left);
   
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return check(root->right,root->left);
        
    }
};