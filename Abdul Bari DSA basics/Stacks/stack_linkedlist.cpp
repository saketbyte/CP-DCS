#include<iostream>
using namespace std;

class Node
{   public:

    int data;
    Node* next;
    
    // Node(int x)
    // {
    //     data = x;
    //     next = NULL;
    // }
};

class Stack{

    private:
    Node *top;

    public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int peek(int idx);
    bool isFull();
    bool isEmpty();
};

Stack::Stack() {
    top = NULL;
}
 
Stack::~Stack() {
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}

bool Stack::isEmpty()
{
    return top == NULL?true:false;
}
bool Stack::isFull()
{
    Node *t = new Node;
    bool f = t==NULL? true:false;
    return f;
}

void Stack::push(int x)
{
    Node *t = new Node;

    if(t == NULL)
    cout<<"Stack Overflow";
    else
    {
        t->data = x;
        t->next =top;
        top = t;
    }
}

int Stack::pop()
{
        if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
                Node *p = top;
                int x = p->data;
                top = top->next;
                delete p;
                return x;
        }
}

int Stack::peek(int idx)
{
    int x =-1;

    Node *p = top;

    for( int i =0; i<idx-1 || p!=NULL;i++)
        p = p->next;
    if(p)
        return p->data;

    else
    return -1;
}

int main()
{
    Stack stk;
    cout<<stk.isEmpty()<<endl;
    stk.push(10);
    stk.push(20);
    stk.pop();
    cout<<stk.isEmpty()<<endl;
    stk.pop();
    
    //stk.pop();                                            
}