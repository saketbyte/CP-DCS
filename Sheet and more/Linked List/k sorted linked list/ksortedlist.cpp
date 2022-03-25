#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
};

class compare {
    public:
    bool operator()(struct Node* p1, struct Node* p2)
    {
        return p1->data > p2->data;
    }
};

Node* sortAKSortedDLL(Node *head, int k)
{
    if(head == NULL)
        return head;
    
    priority_queue<Node*, vector<Node*>,compare> pq;

    Node *newHead = NULL, *last;

    for( int i =0; head!=NULL && i<=k; i++)
        {
            pq.push(head);
            head = head->next;
        }


    while(!pq.empty()){

        if(newHead == NULL)
        {   
            newHead = pq.top();
            newHead->prev = NULL;

            last = newHead;
        }
        else
        {
            last->next = pq.top();
            pq.top()->prev = last;
            last =pq.top();
        }
        pq.pop();

        if(head!= NULL)
        {
            pq.push(head);
            head = head->next;
        }

    }
    last->next = NULL;

    return newHead;

}


void push(Node **head_ref, int new_data)
{
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->prev = NULL;

    new_node -> next = *head_ref;

    if((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    *head_ref = new_node;

}

void printList(Node* head)
{
    // if list is empty
    if (head == NULL)
        cout << "Doubly Linked list empty";
 
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    struct Node* head = NULL;
 
    // Create the doubly linked list:
    // 3<->6<->2<->12<->56<->8
    push(&head, 8);
    push(&head, 56);
    push(&head, 12);
    push(&head, 2);
    push(&head, 6);
    push(&head, 3);
 
    int k = 2;
 
    cout << "Original Doubly linked list:\n";
    printList(head);
 
    // sort the biotonic DLL
    head = sortAKSortedDLL(head, k);
 
    cout << "\nDoubly linked list after sorting:\n";
    printList(head);
 
    return 0;
}