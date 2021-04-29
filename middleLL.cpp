/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 
 
 Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
Memory Usage: 6.7 MB, less than 15.49% of C++ online submissions for Middle of the Linked List.

 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL)
            return head;
        ListNode* temp=head;
        while(head!=NULL)
        {
            
            head=head->next;
            if(head!=NULL)
                head=head->next;
            else
                break;
            temp=temp->next;
        }
        return temp;
    }
};