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

int balancedTree(Tree* root, bool &ok){

    if(!root)
        return 0;

    int lh = balancedTree(root->left, ok);
    int rh = balancedTree(root->right, ok);
    
    if(abs(lh-rh)>1) ok = false;

    return 1 + max(lh, rh);
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

   
    bool ok = true;

    balancedTree(root, ok);

    cout << ok;
   
   
}
