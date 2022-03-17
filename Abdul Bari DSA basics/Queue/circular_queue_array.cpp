#include<iostream>
// Watch the concept video : https://www.udemy.com/course/datastructurescncpp/learn/lecture/13168212#content

using namespace std;

class CircularQueue{
    private: // declaring all the data members as private
        int size;
        int front;
        int rear;
        int *Q;

    public:
        CircularQueue(int size);
        ~CircularQueue();

        bool isFull();
        bool isEmpty();

        void enqueue(int x);
        int dequeue();
        void display();
};

CircularQueue::CircularQueue(int size)
{
    // Making the poninters stand at 0
    this->size = size;
    front = rear = 0;
    Q = new int [size];
}

CircularQueue::~CircularQueue() {
    delete [] Q;
    //delete is used for one single pointer
    //delete[] is used for deleting an array through a pointer
}

bool CircularQueue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}

/*
    Mod operator property:
    the range of x % n is between 0 and n - 1,
    which is to say that the modulo operation will 
    not return more than the divisor.
    the logic behind circular queue being full is that the rear pointer is
    just behind the front pointer linear and circularly both. For example
i =  0  1  2  3  4  5         0  1  2  3  4  5
    [ ][1][2][3][4][5]  or   [4][5][ ][1][2][3]
    F               R            R  F  
    
*/
bool CircularQueue::isFull()
{
    if((rear+1)%size == front)
        return true;
    else
    return false;
}
// rear pointer is used to insert values.

void CircularQueue::enqueue(int x)
{
    if(isFull())
    cout<< "Queue is Overflow" <<endl;
    else
    {
        rear = (rear + 1)%size;
        Q[rear] = x;
    }
}

int CircularQueue::dequeue()
{

    int x = -1;
    if(isEmpty())
    {
        cout<< "Queue underflow"<<endl;
    }

    else
    {
        front  = (front+1) % size;
        x = Q[front];
    }

    return x;
}

void CircularQueue::display() {
    int i = front + 1;
    do {
        cout << Q[i] << flush;
        if (i < rear) {
            cout << " <- " << flush;
        }
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    CircularQueue cq(sizeof(A)/sizeof(A[0]) + 1);
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.enqueue(A[i]);
    }
 
    // Display
    cq.display();
    cout << endl;
 
    // Overflow
    cq.enqueue(10);
 
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.dequeue();
    }
 
    // Underflow
    cq.dequeue();
 
    return 0;
}