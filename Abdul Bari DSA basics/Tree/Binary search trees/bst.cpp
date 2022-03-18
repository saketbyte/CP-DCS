#include <iostream>
#include <stack>

using namespace std;
 
class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 
class BST{
public:
    Node* root;

    BST(){ root = nullptr; }

    void Insert(int key);
    void Inorder(Node* p);
    Node* Search(int key);
};

// iterative insertion

void BST::Insert(int key){

    Node *temp, *dummy = root, *follow;

    if(root == nullptr)
    {
        temp = new Node;
        temp->data = key;
        temp->lchild = temp->rchild = nullptr;
        root = temp;
        return;
    }
    else 
    {
        while(dummy!=nullptr)
        {       
            follow = dummy;
                if(dummy->data == key)
                return;
                else if(dummy->data < key)
                    dummy = dummy->rchild;
                else 
                    dummy = dummy->lchild;

        }

        temp = new Node;
        temp->data = key;
        temp->lchild = temp->rchild =  nullptr;
        
        if(follow->data > key)
            follow->lchild = temp;
        else
            follow->rchild = temp;
            return;
    }
}


void BST::Inorder(Node *p)
{
    if (p){
        Inorder(p->lchild);
        cout << p->data << ", " <<flush;
        Inorder(p->rchild);
    }
    
}

Node* BST::Search(int key)
{
    Node * dummy = root;

    while(dummy!=nullptr)
        {       
                if(dummy->data == key)
                return dummy;
                else if(dummy->data > key)
                    dummy = dummy->lchild;
                else 
                    dummy = dummy->rchild;
        }

        return nullptr;
}
    

int main()
{
    BST bt;
    cout<<"Inserting1"<<endl;
    bt.Insert(10);
        cout<<"Inserting2"<<endl;

    bt.Insert(20);
        cout<<"Inserting"<<endl;

    bt.Insert(30);
        cout<<"Inserting"<<endl;

    bt.Insert(40);
        cout<<"Inserting"<<endl;

    bt.Insert(50);
        cout<<"Inserting"<<endl;

    bt.Insert(60);
        cout<<"Inserting"<<endl;

    bt.Insert(70);

    cout<<"Inorder"<<endl;
    bt.Inorder(bt.root);
    cout<<endl;

    Node * t = bt.Search(50);
    cout<<"Searching "<<endl;
    if(t)
    cout<<t->data<<endl;
    else
    cout<<"Not found"<<endl;
    
}
