class Solution {
public:
    ListNode* rev(ListNode* curr, ListNode* parent){
        ListNode* next= curr->next;
        curr->next = parent;
        if(next)
        return rev(next, curr);
        else 
        return curr;
        
    }
    ListNode* reverseList(ListNode* head) {
        if(!head)
        return head;
        return rev(head, nullptr);
        
        
    }
   
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head, *slow=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverseList(slow);
        while(slow && head){
            if(slow->val != head->val)
            return 0;
            slow = slow->next;
            head = head->next;
        }
        return 1;

}};