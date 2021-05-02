/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
 
 Runtime: 12 ms, faster than 63.55% of C++ online submissions for Linked List Cycle.
Memory Usage: 7.9 MB, less than 77.75% of C++ online submissions for Linked List Cycle.

 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode *fast=head->next;
        ListNode *slow=head;
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
        return true;
    }
};
