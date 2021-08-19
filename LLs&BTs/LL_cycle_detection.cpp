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
        
        ListNode* fptr = head;
        ListNode* sptr = head;
        while(fptr && fptr->next){
            fptr = fptr->next->next;
            sptr = sptr->next;
            
            if(fptr==sptr){
                   return true;
            }
         }
        return false;     
    }
};

// TC--->O(n)
// SC--->1
