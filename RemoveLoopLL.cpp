/* 
Execution Time:0.26
*/
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head==NULL||head->next==NULL)
        return;
    Node* fast = head->next->next;
    Node* slow = head->next;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return;
        fast=fast->next->next;
        slow=slow->next;
    }
	slow=head;
	//cout<<"slow is equal to fast\n";
	if(slow==fast)
	{
	 //  cout<<"slow is equal to head\n";
		while(fast->next!=slow)
			fast=fast->next;
	}
	else
	{
		//cout<<"slow is at some other point\n";
		while(slow->next!=fast->next)
		{
		  //  cout<<"slow: "<<slow->data<<" fast: "<<fast<<"\n";
			slow=slow->next;
			fast=fast->next;
		}
   
		
	}
	 //cout<<"fast: "<<fast->data<<"\n";
	fast->next=NULL;
	

// code here
// just remove the loop without losing any nodes
    }
};
