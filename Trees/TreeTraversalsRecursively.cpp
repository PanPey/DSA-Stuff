/*#include "bits/stdc++.h"
#define int long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define endl '\n'

using namespace std;*/

   // _________________________Recursively_________________________________

   //predOrder Recursive__________D(Root)---->L(Left)---->R(Right)
    void predOrder(TreeNode* root, vector<int>ans){
	   if(!root)
	   	return;
     
     ans.pb(root->data);
     predOrder(root->left, ans);
     predOrder(root->right, ans);
    
   }

   //inOrder Recursive__________L(Left)---->D(Root)---->R(Right)
    void inOrder(TreeNode* root, vector<int>ans){
	   if(!root)
		   return;
     
     predOrder(root->left, ans);
     ans.pb(root->data);
     predOrder(root->right, ans);
    
   }

   //postOrder Recursive__________L(Left)---->R(Right)---->D(Root)
    void postOrder(TreeNode* root, vector<int>ans){
	   if(!root)
   		return;
       
     predOrder(root->left, ans);
     predOrder(root->right, ans);
     ans.pb(root->data);
    
   }

vector<int>TreeTraversal(TreeNode* root){
vector<int>ans;
if(!root){
  return ans;
}

predOrder(root, ans);
//inOrder(root, ans);
//postOrder(root,ans);
return ans;

}  

/*void solve(){

	struct TreeNode{

       TreeNode* val;
       TreeNode* left;
       TreeNode* right;

       TreeNode(int val)
       {
           this->data = data;
           left = right = NULL;
       }

	};
}*/

