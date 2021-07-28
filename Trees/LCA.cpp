/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  
        //empty tree check
        if(!root)
            return NULL;
        
        //checking if p and q exist in the tree
        if(root == p || root == q){
            return root;
        }
        
        // inorder traversal, and we check if we found p and q
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
       
        if(left != NULL && right!= NULL)
            return root;
        else
            return (left ? left : right);
    }
};
