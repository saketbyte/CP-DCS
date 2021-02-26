#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node {
public:

    int data;
    Node* next;
};

class LinkedList{

public:
Node *first;

LinkedList()
{

    first = NULL;
}

LinkedList(int A[], int n);
void display();

};

LinkedList::LinkedList(int A[], int n)
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


void LinkedList::display()
{
    Node *p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
        //p = (*p).next;

    }
    cout<<endl;
}

int main() {
    int A[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    LinkedList L1(A, 10);
    int B[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    LinkedList L2(B, 10);



    Node *p,*q;
    p = L1.first;
    q = L2.first;


    int C[]={0};
    LinkedList L3(C, 1);


    Node * last;
    if(p->data < q->data)
    {
        L3.first = last = p;
        p=p->next;
        L3.first->next = NULL;
    }
    else
    {
        L3.first = last = q;
        q=q->next;
        L3.first->next = NULL;
    }


    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;

    L3.display();







}
