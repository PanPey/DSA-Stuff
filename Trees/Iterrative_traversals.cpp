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

    void inorderIt(TreeNode* root, vector<int> &inorderArray){

        if(!root)
            return;
        stack<TreeNode*>s;
        TreeNode* curr = root;
        
        while(!s.empty() || curr!=NULL){
            if(curr){
            s.push(curr);
            curr = curr->left;
           }
            else{
            curr = s.top();
            s.pop();
            inorderArray.push_back(curr->val);
            curr = curr->right;  
         }    
       }
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>inorderArray; 
        inorderIt(root, inorderArray);  
        return inorderArray;
    }
};
