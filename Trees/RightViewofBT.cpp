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
    vector<int> rightSideView(TreeNode* root) {
     
        if(!root)
            return {};
        
        vector<int>ans;
        int ok=1; // checks whether the node chosen is first from right or not
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL); // NULL checks whether there is a level change or not
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(!temp){
                if(q.size()!=0)
                {    
                  q.push(NULL);
                  ok = 1;
                }
            }
            
            else{
                if(ok){
                    ans.push_back(temp->val);
                    ok = 0;
                }
                
                if(temp->right)            // Just reverse 
                    q.push(temp->right);    //these two statements   
                if(temp->left)              // to get a left view            
                    q.push(temp->left);     // of the given tree
            }
        }
        
    return ans;
        
    }
};
