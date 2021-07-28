// Simple reursive solution
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(!p && !q)
            return true;
        
        if(p && q){
            if(p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right,q->right))
                return true;
        }
        
        return false;
    }
};

// Another approach is to just check if all the three DFS traversals- Preorder, inorder and postorder
// are equal. If they're equal, then the two trees are Identical otherwise not.
