//ALL DFS Traversals  TC and SC-->O(n)

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


void preorder(Tree* root)
{
    if (root == NULL) {
        return;
    }
 
    cout << root->data << " ";
 
    preorder(root->left);
 
    preorder(root->right);

}

void inorder(Tree* root)
{
    if (root == NULL) {
        return;
    }
 
 
    inorder(root->left);
    
    cout << root->data << " ";
 
    inorder(root->right);

}

void postorder(Tree* root)
{
    if (root == NULL) {
        return;
    }
 
 
    postorder(root->left);
 
    postorder(root->right);
    
    cout << root->data << " ";

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

    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
}
