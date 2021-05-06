/*
Runtime: 28 ms, faster than 62.82% of C++ online submissions for Add Two Numbers.
Memory Usage: 71.5 MB, less than 16.63% of C++ online submissions for Add Two Numbers.



You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
void push(struct ListNode *&head, int x)
{
    if(head == NULL){
    struct ListNode* new_node = new ListNode(x,head);
    //new_node->val = x;
    //new_node->next = head;
        
    
    head = new_node;
    }
    else
    {
        ListNode *temp = head;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=new ListNode(x);
    }
}

ListNode* addnum(ListNode* l1, ListNode* l2, int carry, ListNode*& l3)
{
    if(l1 == NULL && l2 == NULL)
    {
        if(carry ==1)
        {
            push(l3, 1);   
        }
        return l3;
    }
    int s=0;
    if(l1==NULL || l2 ==NULL)
    {
        ListNode *temp=(l1!=NULL)?l1:l2;
        s=carry+temp->val;
        push(l3, s%10);
        if(l1!=NULL)
        {
            return addnum(l1->next, l2, (s/10), l3);        
        }
    return addnum(l1, l2->next, (s/10), l3);
    }
    else
    {
        s = (l1->val + l2->val + carry);
        push(l3, s%10);
        return addnum(l1->next, l2->next, (s/10), l3);  
    }
   // ListNode* temp = new ListNode(s%10);
  /*  if(l3!=NULL)
        l3->next = temp;
    else
        l3=temp;
    */
    
        
    
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* l3=NULL;
        return addnum(l1,l2,carry,l3);
        
    }

A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
};
