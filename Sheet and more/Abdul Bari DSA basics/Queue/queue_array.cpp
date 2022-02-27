#include <iostream>
using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;
public:

        Queue(){ front = rear = -1; size = 10; Q = new int[size];}
        Queue(int size){front = rear = -1; this->size = size; Q = new int[this->size];}
        void enqueue(int x);
        int dequeue();
        void display();
};

void Queue::enqueue(int x)
{
    if(rear == size-1)
        cout<<"Queue full"<<endl;
    else {
        rear++;
        Q[rear] = x;
    }
}
int Queue::dequeue()
{
    int x =-1;
    if(front == rear)
        cout<<"Empty"<<endl;
    else
    {
     x = Q[front+1];
    front++;
    }
}

void Queue::display()
{
    for(int i = front+1; i<=rear; i++)
    cout<<Q[i]<<endl;
}


int main()
{   
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();

    return 0;
}