#include<iostream>

using namespace std;

class Node
{   
    public:
    Node *next;
    int data;
};

Node *head;


void createList(int A[], int n)
{
    Node *prev, *temp;
    head = new Node;
    (*head).data = A[0];
    (*head).next = NULL;

    prev = head;

    for(int i =1;i<n;i++)
    {
        temp = new Node;
        temp->data =A[i];
        temp->next = NULL;
        prev->next = temp;
        prev = temp;
    }
}

Node* getKth(Node *start, int k)
{   

    while(k && start!=NULL)
    {
        start = start->next;
        k=k-1;
    }

    return start;
}


Node* reverseKgroups(Node *first, int k)
{
    Node *kth, *kplus, *Kone,*kprev;

    Node *dummy = new Node;
    dummy->data = -1;
    dummy->next = first;

    kprev = dummy;

    
    while(true)
    {

        kth = getKth(kprev,k);
        if(kth == NULL)
            break;

        kplus = kth->next;

        Node *p,*q,*r;
        p = kth->next;
        q = kprev->next;

        while(q!=kplus)
        {
            r = q->next;
            q->next = p;
            p = q;
            q = r;
        
        }

        // TRICKY PART BEST PART
        Kone = kprev->next;
        kprev->next = kth;
        kprev = Kone;   

        
    }
    
    return dummy->next;
    
}


int main()
{


    int A[] = {1,2,3,4,5,6,7,8};
    createList(A,8);

   
    Node *temp = reverseKgroups(head,3);

    cout<<endl;
    cout<<"Groups reversed"<<endl;

   
    
      while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } 


}