class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 

class Queue{
private:
    int size;
    int front;
    int rear;
    Node** Q;  // [Node*]*: Pointer to [Pointer to Node which are stored in the QUEUE]
                // https://stackoverflow.com/questions/27281393/constructing-a-binary-tree-using-queue-in-c#:~:text=If%20you%20wanted,be%20set%20later.
               // https://stackoverflow.com/questions/27281393/constructing-a-binary-tree-using-queue-in-c#:~:text=I%20am%20just,4%2C%202014%20at
public:
    Queue(int size);
    ~Queue();

    bool isFull();
    bool isEmpty();

    void enqueue(Node* );
    Node* dequeue();
};
 
Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node* [size];
}
 
Queue::~Queue() {
    delete [] Q;
}
 
bool Queue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}
 
bool Queue::isFull() {
    if (rear == size-1){
        return true;
    }
    return false;
}
 
void Queue::enqueue(Node* x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
 
Node* Queue::dequeue() {
    Node* x = nullptr;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}
 