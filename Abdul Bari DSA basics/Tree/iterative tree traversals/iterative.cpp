#include <iostream>
#include <queue>
#include <stack>

using namespace std;
 
class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 
class Tree{

  
public:
    Node* root;
    Tree();

    ~Tree();
    void CreateTree();

    void Preorder(Node* p);
    void Inorder(Node* p);
    void Postorder(Node* p);
    void Levelorder(Node* p);

    int Height(Node* p);

    void iterativePreorder(Node* p);
    void iterativeInorder(Node* p);
    void iterativePostorder(Node* p);
};
 
Tree::Tree() {
    root = nullptr;
}
 
Tree::~Tree() {
    // TODO
}
 
void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;
    queue<Node*> q;
 
    root = new Node;
    cout << "Enter root data: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);
 
    while (! q.empty()){
        p = q.front(); // front and pop together make dequeue
        q.pop();
 
        cout << "Enter left child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }
 
        cout << "Enter right child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}

void Tree::Levelorder(Node *p) {
    queue<Node*> q;
    cout << root->data << ", " << flush;
    q.emplace(root); // same as push
 
    while (! q.empty()){
        p = q.front();
        q.pop();
 
        if (p->lchild){
            cout << p->lchild->data << ", " << flush;
            q.emplace(p->lchild); 
        }
 
        if (p->rchild){
            cout << p->rchild->data << ", " << flush;
            q.emplace(p->rchild);
        }
    }
}
 
int Tree::Height(Node *p) {
    int l = 0;
    int r = 0;
    if (p == nullptr){
        return 0;
    }
 
    l = Height(p->lchild);
    r = Height(p->rchild);
 
    if (l > r){
        return l + 1;
    } else {
        return r + 1;
    }
}
 // Starting here:


void Tree::iterativePreorder(Node *p) {
    stack<Node*> stk;
    while (p != nullptr || ! stk.empty()){
        /* the reason for the while condition is:
            1. There might be a case when we reached the end of a branch of tree but we
                are yet to trace other parts of tree so p might be null but stack 
                would not be empty.
            2. Stack might be empty but we still have more nodes to trace in the same branch. 
        */
        if (p != nullptr){
            // Visit the node aka root, print data and store its address to trace back via stack
            // and move to the left child after root.
            cout << p->data << ", " << flush;
            stk.emplace(p);
            p = p->lchild;
        } else {
            // if p is nullptr that means p is at end of a branch
            // so now we need to trace back using the stack of addresses. 
            // so move to it's right child and wait for next iteration when it goes to the 
            // if block to print.
            
            p = stk.top();
            stk.pop();
            p = p->rchild;
            // basically if p is null then pop out address and move to its right child.
        }
    }
    cout << endl;
}
 
void Tree::iterativeInorder(Node *p) {
    stack<Node*> stk;
    while (p != nullptr || ! stk.empty())
    {
        if (p != nullptr){
            stk.emplace(p);
            p = p->lchild;
        } 
        
        else {
            p = stk.top();
            stk.pop();
            cout << p->data << ", " << flush;
            // left root(print) right, so before going to the right child
            // we must print. 
            // Like we did in preorder - printed before moving to left child.
            p = p->rchild;
        }
    }
    cout << endl;
}
 
void Tree::iterativePostorder(Node *p) { 
    // left right root(print)
    stack<long int> stk; // because we will be storing the address of the node as a number
                        // to be able to identify -
                        // when to move to its right child.(first time) 
                        // when to (second time)print 
    long int temp;
    while (p != nullptr || ! stk.empty()){

        if (p != nullptr){
            stk.emplace((long int)p);
            p = p->lchild;
        } else {
            temp = stk.top();
            stk.pop();
             // if temp is positive then move to right child
             // else print the data of that child.
            if (temp > 0){
                stk.emplace(-temp);
                p = ((Node*)temp)->rchild;
            } else {
                cout << ((Node*)(-1 * temp))->data << ", " << flush;
                p = nullptr;
                // we are making p as null because we have to pop the next address after this.
            }
        }
    }
    cout << endl;
}
 
 
int main() {
 
    Tree bt;
 
    bt.CreateTree();
    cout << endl;
 

 
    cout << "Iterative Preorder: " << flush;
    bt.iterativePreorder(bt.root);
 
    cout << "Iterative Inorder: " << flush;
    bt.iterativeInorder(bt.root);
 
    cout << "Iterative Postorder: " << flush;
    bt.iterativePostorder(bt.root);
 
    return 0;
}