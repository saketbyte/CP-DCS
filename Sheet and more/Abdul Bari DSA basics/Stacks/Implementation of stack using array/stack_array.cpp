#include<iostream>
#include<stdlib.h>

using namespace std;

class Stack
{
    
    public:
    int top;
        int size;
        int *S;

        Stack(int size)
        {
            top = -1;
            S = new int[size];
        }
            int capacity();
            bool push ( int x);
            int pop ();
            int peek(int i);
            bool isEmpty();
            bool isFull();
};

bool Stack::isEmpty()
{
    if(top == -1)
        {cout<<"Empty Stack"<<endl;
        return true;}
    else
    return false;
}

bool Stack::isFull()
{
    if(top == size -1)
    {   
                cout<<"Full Stack"<<endl;

        return true;
    }
    else
    return false;
}

bool Stack::push(int x)
{ 
    if(isFull())
    {
        
        return false;

    }
    else
    {
        S[++top] = x;
        return true;
    }
}

int Stack::pop()
{
    if(isEmpty())
    {
        return false;
}
    else
    {
        int x = S[top];
        
        S[top] = 0;
        top--;
        return x;
    }
}

int Stack::peek(int i)
{
    if(isEmpty() || top <= i-1)
    {   cout<<"No such index exists. "<<endl;
        return -1;
        }
    else
    {
        return S[top];
        
    }
}
int Stack::capacity() {
    return top + 1;
}
int main()
{
    Stack A(3);

    A.push(1);
        cout<<A.top;

    A.push(2);
    cout<<A.top<<endl;
        cout<<"popping now";

    A.pop();
    cout<<A.top;

    A.pop();
    cout<<A.top;
    cout<<"pop3";
    A.pop();
    cout<<A.top;

    A.push(3);
     cout<<A.top;

    A.peek(5);
    A.capacity() ;
 
    A.pop();

 
   
 
    return 0;
}

