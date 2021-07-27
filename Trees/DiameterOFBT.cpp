class Solution {
public:
    
    // diameter is longest dis b/w any two nodes
    // diamter is equal to 1 + leftHeight + rightHeight
    
    int height(TreeNode* root, int &d){
        
        if(!root)
            return 0;
        
         int lh = height(root->left, d);
         int rh = height(root->right, d);
        
        if(lh+rh>d)
            d = lh+rh;
        
        return 1 + max(lh, rh);
        
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        height(root, d);
        return d;
    }
};
