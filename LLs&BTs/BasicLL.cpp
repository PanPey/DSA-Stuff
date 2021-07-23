// Bascic Linked List creation and printing it.
#include "bits/stdc++.h"
using namespace std;

struct  LinkedList {
  
  int data;
  LinkedList* next; 

};

void printLinkedList(LinkedList* root){

  while(root!=NULL){
    cout << root->data << " ---->"; 
    root = root->next;
  }

  cout << "NULL";
}

int main(){

LinkedList *first, *second, *third;

first = new LinkedList;
second = new LinkedList;
third = new LinkedList;

first->data = 10;
first->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = NULL;

printLinkedList(first);

return 0;
}

// Output :  10 ---->20 ---->30 ---->NULL
// TC--->O(n) 
