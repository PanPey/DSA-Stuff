/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* fptr;
        ListNode* sptr;
        fptr = sptr = head;
        while(fptr && fptr->next){
            fptr = fptr->next;
            sptr = sptr->next;
            
            if(fptr){
                fptr = fptr->next;
            }
            
            if(fptr==sptr){
                sptr=head;
                while(fptr!=sptr){
                    sptr = sptr->next;
                    fptr = fptr->next;
                }
                
                if(sptr)
                    return true;
            }
            
        }
  
        return false;
       
    }
};

// TC--->O(n)
// SC--->1
