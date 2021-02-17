#include<iostream>
#include<bits/stdc++.h>


using namespace std;

class Node{

public:
    int data;
    Node *next;
};

class LinkedList{
public:
    Node *first;

    LinkedList()
    {
        first = NULL;
    }

    LinkedList(int A[], int n);

    ~LinkedList();

    void display();
    int length();
    void insert(int idx, int val);
    int remove(int idx);
    void reverseLink();
    void reverseData();
    bool isCycle();
    int sum();
    int max();
    Node* search(int key);
    void inSorted(int x);
    void dupRem();
    void join(Node *p, Node *r);
    void merg(Node *p, Node *q);


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

LinkedList::~LinkedList()
{
    Node *p =first;

    while(first != NULL)
    {
        first = first->next;
        delete p;
        p=first;
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

int LinkedList::length()
{
    Node *p = first;
    int l = 0;

    while(p)
    {
        l++;
        p=(*p).next;
    }
return l;

}

void LinkedList::insert(int idx, int val)
{

    Node *iNode;

    if(idx<0|| idx>length())
    {
        cout<<"Invalid index"<<endl;
        return;
    }
    iNode = new Node;
    iNode->data = val;
    iNode->next = NULL;
    if(idx == 0)
    {
        iNode->next = first;
        first = iNode;
    }
    else
    {
        Node *p =first;

        for(int i =0;i<idx-1;i++)
            p = p->next;

        iNode->next = p->next;
        p->next = iNode;
    }
}


int LinkedList::remove(int idx)
{
    Node *temp = first;
    int del_val_if_needed = -1;

    if(idx<0|| idx>length())
    {
        cout<<"Invalid index"<<endl;
        return -1;
    }
    else if(idx == 0)
    {
        del_val_if_needed = first->data;
        first = first->next;
        delete temp;
    } else{
        for(int i =0;i<idx-1;i++)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        del_val_if_needed = temp2->data;
        temp->next = temp2->next;
        delete temp2;
    }

    return del_val_if_needed;
}

void LinkedList::reverseLink()
{
    Node *p1 = first;
    Node *p2 = NULL;
    Node *p3 = NULL;

    while(p1!=NULL)
    {
        p3 = p2;
        p2 = p1;
        p1 = p1->next;
        p2->next = p3;
    }
    first = p2;
}

void LinkedList::reverseData()
{
    vector<int> A;

    Node *p =first;

    int i =0;
    while(p!=NULL)
    {
        A.push_back(p->data);
        p=p->next;
        i++;
    }

    p = first;
    i--;
    while(p!=NULL)
    {
       (*p).data = A[i];
        p=p->next;
        i--;
    }
}

bool LinkedList::isCycle() {

    Node *p, *q;
    p = first;
    q = p;

    do{
        p = p->next;
        q = q->next;
        q=q!=NULL?q->next:NULL;
    }while(p&&q && p!=q);

    return p==q?true:false;
}

int LinkedList::sum()
{
    Node *p =first;
    int s = 0;

    while(p!=NULL)
    {
        s=s+p->data;
        p=p->next;
    }
    return s;
}

int LinkedList::max()
{
    int mx =INT_MIN;
    Node *p = first;

    while(p)
    {
        if(p->data>mx)
            mx = p->data;
        p=p->next;
    }
    return mx;
}

Node* LinkedList::search(int key)
{
    Node *p =first;

    while(p)
    {
        if(p->data == key)
            return p;
        p=p->next;
    }
}


void LinkedList::inSorted(int x) {

    if(first == NULL)
    {
        first->data = x;
        first->next = NULL;
    }
    else
    {
        Node *t = new Node;
        t->data =x;

        Node *p = first;

        while(p->next!=NULL && p->data<x)
            p=p->next;
            if(p==first)
            {
                t->next = first;
                first = t;
            }
            else {
                t->next = p->next;
                p->next = t;
            }

    }
}
void LinkedList::dupRem()
{

    Node *p = first;
    Node *q = p->next;

    while(q!=NULL)
    {
        if(p->data == q->data)
        {
           p->next = q->next;
           delete q;
           q = p->next;
        }
        else
        {
            p=q;
            q=p->next;
        }


    }
}





int main()
{
    int A[] = {2,4,6,8,10,12,14,16,18,20};

    LinkedList L1(A, 10);

    L1.display();
    int a = L1.remove(5);
    L1.display();
    L1.insert(5,a);
    L1.display();
    L1.reverseLink();
    L1.display();
    L1.reverseData();
    L1.display();
    bool t = L1.isCycle();
    cout<<t<<endl;
    L1.inSorted(0);
    L1.display();
    L1.inSorted(2);
    L1.display();
    L1.dupRem();
    L1.display();
    int B[] = { 1,3,5,7,9,11,13,15,17,19};
    LinkedList L2(B,10);
    L2.display();

}