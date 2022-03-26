#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node *prev;
};

Node* makeDLL(Node *first ,int A[], int n)
{
    Node *prev, *temp;
    first = new Node;
    (*first).data = A[0];
    (*first).next = NULL;
    first->prev = NULL;
    prev = first;

    for(int i =1;i<n;i++)
    {
        temp = new Node;
        temp->data =A[i];
        temp->next = NULL;
        prev->next = temp;
        prev = temp;
    }
    return first;
}

void printList(Node *head)
{
    Node *temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


Node* rotate(Node* head,int k)
{   
    Node *newHead = head;
    if(k == 0)
        return head;
    else
    {   
        Node *temp = head;
        Node *temp2 = head;

        while(temp->next != NULL)
            temp = temp->next;
        
        temp->next = head;


        temp = head;

      
        for(int i =0;i<=k; i++)
            temp2 = temp2->next;
        newHead = temp2;
        temp2->prev = NULL;
        
        

        for(int i =0; i<k; i++)
            temp = temp->next;
            temp->next = NULL;

        return newHead;
    }
}

int main()
{
    int A [] = { 1,2,3,4,5};

    Node* head = makeDLL(head, A, 5);
    printList(head);
    cout<<endl;
    cout<<"Rotated List"<<endl;
    Node* rotatedHead = rotate(head, 2);
    printList(rotatedHead);
}