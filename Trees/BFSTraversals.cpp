// TC and SC-->O(n)

#include "bits/stdc++.h"
using namespace std;

// Data structure to store a binary tree
struct Tree{
  
  int data;
  Tree* left = NULL;
  Tree* right = NULL;

  Tree(int data){
    this->data = data;
    this->left = this->right = NULL;
  }
};


//BFS or level order traversal 
// Output: 1 2 3 4 6 7 8

void levelOrder(Tree* root, vector<int>&v){
    
    if(!root)
         return;
    
    queue<Tree*>q;
    q.push(root);

    while(!q.empty()){
          
         Tree* temp = q.front();
         v.push_back(temp->data);
         q.pop();

         if(temp->left) q.push(temp->left);
         if(temp->right) q.push(temp->right);  
    }
}
 



int main(){

   /* Example tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */

     Tree *root = new Tree(1);
     root->left = new Tree(2);
     root->right = new Tree(3);
     root->left->left = new Tree(4);
     root->right->left = new Tree(5);
     root->right->left->left = new Tree(7);
     root->right->left->right = new Tree(8);
     root->right->right = new Tree(6); 

     vector<int>v;  
     levelOrder(root, v);

     for(auto i : v){ cout << i << " ";}
}
