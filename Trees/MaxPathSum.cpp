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
    
    int dfs(TreeNode* root, int &ans){
        
        if(!root)
            return 0;
        
        int x= dfs(root->left, ans);
        int y= dfs(root->right, ans);
         
        ans = max(x+y+root->val, ans);
        
        return max(0, root->val + max(x, y));
    
    }
    
    
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        
        dfs(root, ans);
        
        return ans;
        
    }
};
