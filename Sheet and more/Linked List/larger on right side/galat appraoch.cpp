// The approach was very simple, to take three pointers and check if the condition is violated and update accordingly.
// But the approach failed bcause if we remove some element and then after its's remoaval a larger element to the right
// comes in, it would again violate the condition and we have nothing. 

// The solution is I could make a compare function and then call it everytime before I move my pointers further.

class Solution
{
    public:

    // bool comp(Node *p, Node *q)
    // {
    //     return (q->data > p->data);
    // }
    
    Node *compute(Node *head)
    {
        // your code goes here
        
        Node *p = NULL;
        Node *q = head;
        Node *r = head->next;
        
        while(r!=NULL)
        {
            if(p==NULL)
            {
                if(r->data > q->data)
                {
                    delete q;
                    q = r;
                    r = r->next;
                    head = q;                    
                }
                
                else
                {
                    p = q;
                    q = r;
                    r = r->next;
                }
            }
            else if(r->data > q->data)
            {
                p->next = r;
                delete q;
                q = r;
                r=r->next;
            }
            
            else
            {
                p = q;
                q = r;
                r = r->next;
            }
            
        }
        
        
        return head;
        
    }
    
};