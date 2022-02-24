#include<iostream>
#include<cstring>

using namespace std;


class Node
{
    public:
    char data;
    Node* next;
};

class Stack
{
    Node* top;
    public:
    Stack();
    ~Stack();
    void push(char x);
    char pop();
    char peek(int index);

    bool isEmpty();
    bool isFull();
    char stackTop();
};

Stack::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }

}

void Stack::push(char x)
{
    Node *t = new Node();
        if(t == NULL)
            cout<<"The heap is full"<<endl;
        else{
            t->data = x;
            t->next = top;
            top = t;
        }
}

char Stack::pop()
{   
    char x;
    if(!top)
    cout<<"Empty Stack";
    
    else
    {
        Node *p = top;
        x = top->data;
        top = top->next;
        delete p;
        return x;

    }
}

bool Stack::isEmpty()
{
    if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }
    return false;
}

bool Stack::isFull()
{
    Node *t = new Node();
    if(t == NULL)
        {
            cout<<"Stack is full"<<endl;
            return true;
        }
    else
        return false;
}

char Stack::peek(int idx)
{
    if(isEmpty())
    cout<<"Hence, can not peak"<<endl;
    else
    {
        Node *p = top;
        for( int i = 1; i<idx && p!=NULL;i++)
            p = p->next;
        
        if(p!= NULL)
        return p->data;
        else
        cout<<"Invalid Index given"<<endl;
    }

}

bool isBalanced(char* exp)
{
    Stack stk;

    for(int i =0; i<strlen(exp);i++)
    {
        =p
    }
}


