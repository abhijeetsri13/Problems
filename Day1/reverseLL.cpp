/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 
 Runtime: 4 ms, faster than 96.23% of C++ online submissions for Reverse Linked List.
Memory Usage: 8.2 MB, less than 75.44% of C++ online submissions for Reverse Linked List.

 */

class Solution {
public:
    
    ListNode* reverseList(ListNode* temp) {
    ListNode* prev=NULL;
    ListNode* prev2=NULL;
   while(temp!=NULL)
   {
       prev=temp;
       temp=temp->next;
       prev->next =prev2;
       prev2 = prev;
   }
    return prev;
    }
};