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

        Queue(){
            front = rear = 0;
            size = 10;
            Q = new int[size];
            } // default size is decided to be done. 

        Queue(int size)
        {
        front = rear = 0;
        this->size = size;
        Q = new int[this->size];
        }
        void enqueue( int x);
        int dequeue();
        void display();
};

void Queue::enqueue(int x)
{
    if((rear+1)%size == front)
        cout<<"Queue full"<<endl;
    else {
        rear = (rear+1)%size;
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
        front = (front+1)%size;
         x = Q[front+1];
    
    }
}

void Queue::display()
{
    
    int i = front+1;
    do{
        cout<<Q[i]<<endl;
        i = (i+1)%size;
    }while(i!=(rear+1)%size);
    
}


int main()
{   // in a queue of size n we can only insert n-1 elemebts in one go. 
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    //q.enqueue(50);
    q.display();

    return 0;
}