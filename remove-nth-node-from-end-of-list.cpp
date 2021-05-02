/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 
 Runtime: 4 ms, faster than 80.21% of C++ online submissions for Remove Nth Node From End of List.
Memory Usage: 10.7 MB, less than 19.23% of C++ online submissions for Remove Nth Node From End of List.

 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* temp_ref=head;
        while(n!=0)
        {
            temp_ref=temp_ref->next;
            n--;
        }
        while(temp_ref!=NULL)
        {
            temp_ref=temp_ref->next;
            prev = temp;
            temp=temp->next;
         
        }
        if(prev==NULL)
            head=head->next;
        else
        prev->next = temp->next;

        return head;
    }
};