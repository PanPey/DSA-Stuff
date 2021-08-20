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
    
    bool palindromeChecker(ListNode* &left, ListNode* right){
        
        if(!right) return true;
        
        bool ok1 = palindromeChecker(left, right->next);
        if(!ok1) return false;
        
        bool ok2 = (left->val == right->val);
        left = left->next;
        
        return ok2;
    }
    
    bool isPalindrome(ListNode* head) {
        
        return palindChecker(head, head);
        
    }
};
