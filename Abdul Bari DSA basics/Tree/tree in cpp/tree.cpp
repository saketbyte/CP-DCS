#include <iostream>
#include "queuecpp.h"

using namespace std;
 
 // basic node of a tree

class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 

 
class Tree{
private:
    Node* root;
public:
    Tree() { root = nullptr; }
    ~Tree();
    void CreateTree();

    void Preorder(){ Preorder(root); }  // Passing Private Parameter in Constructor if root was declared
                                        // as a private member of class, however since it is not, here we are
                                        // just showing it as an example of how to do it.
    void Preorder(Node* p);

    void Postorder(){ Postorder(root); }  // Passing Private Parameter in Constructor
    void Postorder(Node* p);

    void Inorder(){ Inorder(root); }
    void Inorder(Node* p);

    void Levelorder(){ Levelorder(root); }  // Passing Private Parameter in Constructor
    void Levelorder(Node* p);

    int Height(){ return Height(root); }  // Passing Private Parameter in Constructor
    int Height(Node* p);

    Node* getRoot(){ return root; }
};
 
void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;
    Queue q(129); // just a random supposedly sufficient sized array for queue storing addresses of nodes

    root = new Node;
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;

    // root node created above

    q.enqueue(root);
    // storing the address of node in queue to fill further nodes ie left and right child and so on.
 
    while (! q.isEmpty()){
        p = q.dequeue();
        // remember that p is the current parent node whose children are being introduced in the tree
 
        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        // if there is a left child - ie it is not -1 then create a node and enqueue it for the next check.
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }
         // if there is a right child - ie it is not -1 then create a node and enqueue it for the next check.

        cout << "Enter right child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
 
void Tree::Preorder(Node *p) {
    if (p){
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
 
void Tree::Inorder(Node *p) {
    if (p){
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}
 
void Tree::Postorder(Node *p) {
    if (p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}
 
void Tree::Levelorder(Node *p) {
    Queue q(100);
    cout << root->data << ", " << flush;
    q.enqueue(root);
 
    while (! q.isEmpty()){
        p = q.dequeue();
        if (p->lchild){
            cout << p->lchild->data << ", " << flush;
            q.enqueue(p->lchild);
        }
        if (p->rchild){
            cout << p->rchild->data << ", " << flush;
            q.enqueue(p->rchild);
        }
    }
}
 
 // Reference video to trace maybe: https://youtu.be/9ejFkjEgK3k
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
 
Tree::~Tree() {
    // TODO
}
 
 
int main(){
 
    Tree t;
 
    t.CreateTree();
 
    cout << "Preorder: " << flush;
    t.Preorder(t.getRoot());
    cout << endl;
 
    cout << "Inorder: " << flush;
    t.Inorder(t.getRoot());
    cout << endl;
 
    cout << "Postorder: " << flush;
    t.Postorder(t.getRoot());
    cout << endl;
 
    cout << "Levelorder: " << flush;
    t.Levelorder(t.getRoot());
    cout << endl;
 
    cout << "Height: " << t.Height(t.getRoot()) << endl;
 
    cout << "Recursive Passing Private Parameter in Constructor" << endl;
 
    cout << "Preorder: " << flush;
    t.Preorder();
    cout << endl;
 
    cout << "Inorder: " << flush;
    t.Inorder();
    cout << endl;
 
    cout << "Postorder: " << flush;
    t.Postorder();
    cout << endl;
 
    cout << "Levelorder: " << flush;
    t.Levelorder();
    cout << endl;
 
    cout << "Height: " << t.Height() << endl;
 
}