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


// top view---->   4  2  1  3  6
void topView(Tree* root){

 if(!root)
    return;

 map<int, int>mp;
 queue<pair<Tree*, int>>q;
 q.push({root, 0});

 while(!q.empty()){
 
    pair<Tree*, int> p = q.front();
    q.pop();

    Tree* temp = p.first;
    int hd = p.second; // hd refers to horizontal distance

    if(mp.find(hd)==mp.end()) 
        mp[hd] = temp->data;

    if(temp->left)
        q.push({temp->left, hd-1});

     if(temp->right)
        q.push({temp->right, hd+1});
 }

 for(auto i : mp){
    cout << i.second << " ";
 }

}



// bottom view---> 4  7  5  8   6
void bottomView(Tree* root){

    if(!root)
    return;

 map<int, int>mp;
 queue<pair<Tree*, int>>q;
 q.push({root, 0});

 while(!q.empty()){
 
    pair<Tree*, int> p = q.front();
    q.pop();

    Tree* temp = p.first;
    int hd = p.second; // hd refers to horizontal distance

    mp[hd] = temp->data;

    if(temp->left)
        q.push({temp->left, hd-1});

     if(temp->right)
        q.push({temp->right, hd+1});
 }

 for(auto i : mp){
    cout << i.second << " ";
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

     topView(root);   
     cout << endl;
     bottomView(root);


}
