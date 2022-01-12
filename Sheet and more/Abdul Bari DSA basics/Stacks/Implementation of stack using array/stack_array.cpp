#include<iostream>

using namespace std;

class Stack
{
    private:

        int capacity;
        int top;
        int *Arr;

    public:

        Stack(int size);
        ~Stack();
        void push(int x);
        int pop();
        int peek();
        int size();
        
        bool isEmpty();

};


Stack::Stack(int size)
{
    capacity = size;
    Arr = new int[size];
    top = -1;
}


Stack::~Stack()
{
    delete[] Arr;
}

int Stack::pop()
{
    int x = -1;

    if(top == -1){
        cout<<"Underflow"<<endl;
        return x;
    }
    else
    {
        x = Arr[top];
        top--;
        return x;
    }

}


void Stack::push(int x)
{
    if(top == capacity-1)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        top++;
        Arr[top] = x;
    }
}

int Stack::peek()
{
    int x  = 0;
    // int pos = capacity - idx + 1;

    if(isEmpty() )
        cout<<"Nothing exists here"<<endl;
    else
        x = Arr[top];
    
    return x;
}


int Stack::size()
{
    return top+1;
}

bool Stack::isEmpty()
{
    return top == -1;
}


int main()
{

    Stack S(3);
    S.push(3);
    S.push(2);
    S.pop();
    S.push(1);
    S.push(99);
    cout<<S.peek();
}
