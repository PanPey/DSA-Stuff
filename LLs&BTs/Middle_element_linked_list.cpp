/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
     
        // I use two pointers- fast and slow pointer. Slow pointers iterates by one step while fast pointer interates by two steps. The moment fast pointers
           // tail we stop and the node that slow pointers points will be our middle element.
      
        ListNode* fptr;
        ListNode* sptr;
        fptr = sptr = head;
        while(fptr && fptr->next){
            sptr = sptr->next;
            fptr = fptr->next;
            if(fptr){
                fptr=fptr->next;
            }
        }
        
        return sptr;
    }
};
//TC--->0(n) (and single pass)
//SC--->O(1)
