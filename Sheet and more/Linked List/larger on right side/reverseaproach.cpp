//In the reversed linked list, we need to do the opposite.
//We have to remove all the nodes having greater value on the left.
//Since now, we can traverse from left to right, we can keep track of the
// maximum value and delete the node whose values are less than the maximum value till that node.

/*
Algorithm
Reverse the linked list.
Now traverse the linked list and keep track of the maximum value.
At any node, if the node’s value is smaller than the maximum value till now, delete the node.
Now we have a linked list in which all nodes having greater value on the left side have been deleted.
Reverse the linked list and return it as our answer.

*/

class Solution
{
    public:
    
    Node* reverse(Node* head)
     {
         
       if(head==NULL)
           return NULL;
       
       Node* prev=NULL;
       Node* curr=head;
       Node* nxt=curr->next;
       
       while(curr)
       {
           nxt=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nxt;
       }
       
       return prev;
     }
   
   
   Node *compute(Node *head)
   {
       
       Node* newhead=reverse(head);
       
       Node* p=newhead;
       
       int maxsofar=INT_MIN;
       
       Node* dummy = new Node(0);
       Node* d=dummy;
       
       while(p!=NULL)
       {
           if(p->data>=maxsofar)
           {
               maxsofar=p->data;
               d->next=p;
               d=d->next;
           }
           p=p->next;
       }
       d->next=NULL;
       Node* res=reverse(dummy->next);
       return res;
       
   }
};
   