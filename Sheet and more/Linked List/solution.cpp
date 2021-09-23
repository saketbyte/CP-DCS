#include<iostream>

using namespace std;


class Node
{
    public:
    Node* next;
    int data;
};

class LinkedList
{
    public:
    Node *first;
    LinkedList(int A[], int n);
    Node* reverseKGroup(Node *head, int k);
    Node* getKth(Node *grPrev, int k);
    void display(Node*);

};


LinkedList:: LinkedList(int A[], int n)
{
    Node *prev, *temp;
    first = new Node;
    (*first).data = A[0];
    (*first).next = NULL;

    prev = first;

    for(int i =1;i<n;i++)
    {
        temp = new Node;
        temp->data =A[i];
        temp->next = NULL;
        prev->next = temp;
        prev = temp;
    }
}

Node* LinkedList::getKth(Node *grPrev, int k)
{   
    while(k!=0 && grPrev != NULL)
       { 
        grPrev = grPrev->next;
        k--;
       }

    return grPrev;
}



Node* LinkedList::reverseKGroup(Node *head, int k)
{
    Node* dummy = new Node;
    dummy->data = 0;
    dummy->next = head;
    Node* grPrev = dummy;
    Node* grNext = dummy->next;
    Node* kth;
    


    while(1)
    {
        kth = getKth(grPrev,k);

        if(kth==NULL)
            break;

        grNext = kth->next;

        Node *curr = grPrev->next ;
        Node *prev = grNext, *tmp = NULL;
        
        while (curr != grNext) 
        {
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
         
        Node* tmp2 = grPrev->next;
        grPrev->next = kth;
        grPrev = tmp2;
       
    }

    
    return dummy;


}

void LinkedList::display(Node *head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main()
{

    int A[] = { 1,2,3,4,5};
    cout<<endl;

    LinkedList L1 = LinkedList(A,5);
    Node *nde = L1.reverseKGroup(L1.first, 2);

    L1.display(nde);
}