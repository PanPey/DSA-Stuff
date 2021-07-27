// Everything you should know about binary trees

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

int height(Tree* root){

    if(!root)
        return 0;
    return 1 + max(height(root->left), height(root->right));
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

   cout << height(root);  
   
   
}
