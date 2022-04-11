class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node *p = head;
        
        int A[3] = {0};
        
        while(p!=NULL)
        {
            A[p->data] += 1 ;
            p=p->next;
        }
        
    p = head;
    
    int i = 0;
    while(p!=NULL)
    {
        if (A[i] == 0)
            i++;
        else
        {
            p->data = i;
            A[i]--;
            p = p->next;
    }
    }
    return head;
    
    }
 
  
};

// we are just counting the number of 0 1 and 2s and then we are trying to re populate 
// the nodes with these values.