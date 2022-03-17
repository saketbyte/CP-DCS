#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;    
};

class Queue{

    Node *front = NULL;
    Node *rear = NULL;

public:
    void enqueue(int x);
    int dequeue();
    void display();

};

void Queue::enqueue(int x)
{
    Node *t = new Node;
    if(t== NULL)
    cout<<"Queue is full"<<endl;
    else
    {
        t->data = x;
        t->next = NULL;
        if(front == NULL)
            {
                front = rear = t;
            }
        else
        {
            rear->next = t;
            rear = t;
        }

    }
}


int Queue::dequeue()
{
    int x =-1;
    Node *p;

    if(front == NULL)
    {
        p = front;
        front = front->next;
        x =p->data;
        delete p;
    }
    return x;
}

void Queue:: display()
{
    Node *p = front;

    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}


int main()
{
    Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);

    Q.display();
}