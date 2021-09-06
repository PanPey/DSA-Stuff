//  Naive Approach: 2 pass - O(2N) solution
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         /* 
          
           
           Traverse the linkedlist and get its length
           and then go to len-nth position, lets call it xth node
           Then, x->next = x->next->next and also store x->next in
           some dummy node in order to delete it from memory
        */
        
        if(!head)
            return NULL;
        
        int len=0;
        ListNode* temp = head;
        while(temp){
           temp = temp->next; 
           len++;
        }
        
        if(len == n) {
  	      return head->next; 
          }
        
        ListNode* p = head;

         for(int i = 0; i < len-n-1; i++) {
	         p = p->next;
         }


        ListNode* del = p->next;
        p->next = del->next;
        delete del;
        return head;
        
    }
};

// Efficient Approach: One pass solution - O(N)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
       
        if(!head)
            return NULL;
           
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode *fp = dummy, *sp =dummy;
        
        for(int i=0; i<n; i++){
            fp = fp->next;
        }
        
        while(fp->next!=NULL){
            fp = fp->next;
            sp = sp->next;
        }
        
        sp->next = sp->next->next;
        return dummy->next;
    }
};
