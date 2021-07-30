// Many ways to solve this problem
// Method 1 -- using inorder traversal
class Solution {
public:
    
      bool isSorted(vector<int>arr){
   
       for(int i=1; i<arr.size(); i++){
         if(arr[i] <= arr[i-1])
           return false;
          }
        return true;
        }
    
    
    void helper(TreeNode* root, vector<int> &arr){
        
         if(!root)
           return;
        
        helper(root->left, arr);
        arr.push_back(root->val);
        helper(root->right, arr);
                        
    }
    
    
    bool isValidBST(TreeNode* root) {
      
        vector<int>arr;
        helper(root, arr);
        return isSorted(arr);
    }
};

// TC --- > O(n)
// SC --->  O(n)

