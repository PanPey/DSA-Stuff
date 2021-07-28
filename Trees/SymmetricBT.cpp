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
    
    bool mirror(TreeNode* p, TreeNode* q){
        
        if(!p && !q)a
            return true;
        
        if(p && q && p->val == q->val)
            return mirror(p->left, q->right) && mirror(p->right, q->left);
        
       return false; 
        
    }
    
    bool isSymmetric(TreeNode* root) {

      return mirror(root, root);
            
    }
};
