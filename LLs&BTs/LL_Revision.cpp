#include "bits/stdc++.h"
using namespace std;

#define int long long int 


class Linked{
  public:
    int data;
    Linked *next;

// Constructor without the parameter or no data
  	Linked(){
     this->next = NULL;
  	} 

// Constructor with the data as parameter
  	Linked(int data){
     this->data = data;
     this->next = NULL;
  	}

// Adding the new node in the linked list
  	Linked *add(int data, Linked *head){
  		// if linkedlist is empty create the node and make head point to it
  		if(!head){
  			Linked *temp = new Linked(data);
  			head = temp;
  		}

// if linkedlist has atleast one node then traverse till the end and add the new node there
  		else{
            
            Linked *temp = head;
            while(temp->next != NULL){
              temp = temp->next;
            }
            temp->next = new Linked(data);
  		}

        return head;
  	}

//Printing the linked list
    void print(Linked *head){
    	Linked *temp = head;
    	while(temp != NULL){
    		cout << temp->data << " ";
    		temp = temp->next;
    	}

    	cout << endl;
    }


    // Task1: Middle of a Linked list
int middle_element(Linked *head){

	Linked *sp = head, *fp = head;

	while(fp != NULL && fp->next != NULL){
		fp = fp->next->next;
		sp = sp->next;
	}

	return sp->data;
} 

// Task2: Delete the middle element
void delete_middle(Linked *head){
 
    Linked *sp = head, *fp = head, *pre = head;

	while(fp != NULL && fp->next != NULL){
		fp = fp->next->next;
		pre = sp;
		sp = sp->next;
	}
   
   pre->next = sp->next;
   delete sp;

}


    // Task3: Delete the entire linked list
    Linked *delete_linkedlist(Linked *head){

   Linked *pre=head;
   head=head->next;
   while(head){
       delete pre;
       pre = head;
       head = head->next;  
   }
   return head;
}

// Task4: Print the reverse linked list
void print_reverse(Linked *head){
  
//base case 
    if(head==NULL)
       return;
// Simple backtrack
     print_reverse(head->next);
     cout << head->data << " ";   

  }

// Task5: Reverse the linked list actually
Linked *reverse_actual(Linked *head){
 
    Linked *pre=NULL, *cur=head, *nxt=head;
 
    while(cur){
    	 
    	nxt = cur->next; 
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }   
 return pre;
 }

// Task6: Check linked list is palindromic recursively 
bool is_palindrome(Linked* &left, Linked* right){

    if(right == NULL)
    	return true;
 
     bool one = is_palindrome(left, right->next);
     if(!one)
     	return false;

     bool two = (left->data == right->data); 
     left = left->next;
     
     return two;
 
 } 

 // Task7: Delete duplicates in sorted Linked list
 Linked *remove_duplicates_sortedVersion(Linked* head){
     
     Linked* cur = head;
     while(cur->next != NULL){


          if(cur->data == cur->next->data){
             Linked *temp = cur->next;
             cur->next = temp->next;
          	 delete temp;
          }
           else{
           	cur = cur->next;
           }

     }

     return head;
  }

 // Task8: Delete duplicates in Unsorted Linked list
 Linked *remove_duplicates_UnsortedVersion(Linked* head){
  
      set<int>s;
      Linked* cur = head, *pre = cur;

      while(cur){
         if(s.count(cur->data))
         {
           pre->next = cur->next;
           delete cur;
         }
         else{
         	s.insert(cur->data);
         	pre = cur;
         }
         cur = pre->next;
      }
      return head;
 }  
};

void solve(){
   
  Linked *head = NULL;
  
  head = head->add(15,head);
  head = head->add(20,head);
  head = head->add(15,head);
  head = head->add(20,head);
  head = head->add(30,head);
  head = head->add(15,head);
  
  head->remove_duplicates_UnsortedVersion(head);
  head->print(head);  
}


signed main(){
  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      

    int t=1;
    //cin >> t;
    while(t--){
      solve();   
  }
}


