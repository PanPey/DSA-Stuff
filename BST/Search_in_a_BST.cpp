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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(!root)
            return NULL;
        TreeNode* node = new TreeNode();
        
        if(root ->val == val)
             return root;
        
        else if(root->val > val)
            return searchBST(root->left, val);
        
        else if(root->val < val)
            return searchBST(root->right, val);
        
        return node;
    }
};

// TC ---> O(logn) Avg and best case, for non skewed BSTs.
// Sc ---> O(logn) Avg and best case, for non skewed BSTs.
