// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
// node for linked list:

// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };


// ...............................SOLUTION

// Here we first reverse these lists and do place values align because of this. Now we just do basic arithematic.

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    
    struct Node* reverseList(struct Node *head)
    {
       Node *current = head;
        Node *prev = NULL, *next = NULL;
        
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
        
        

    
    
    // void display(struct Node *head)
    // {
    //     Node *temp = head;
        
    //     cout<<"DISPLAY"<<endl;
    //     while(temp)
    //     {
    //         cout<<temp->data;
    //         temp = temp->next;
    //     }
    // }
    
    
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node *l1 = reverseList(first);
        Node *l2 = reverseList(second);
        
        // display(l1);
        // display(l2);
    
        
        int carry = 0;
        int sum = l1->data + l2->data + carry;
        
        l1 = l1->next;
        l2 = l2->next;
        // making a new list to store sum okay?
        Node *sumList = new Node(sum%10);
        Node *tmp = sumList;
        tmp -> next = NULL;
        carry = sum/10;
        
        
        while(l1 || l2|| carry!=0 )
        {
            sum = 0;
            sum = sum + carry;
            
            if(l1)
            {
                sum += l1->data;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->data;
                l2 = l2->next;
            }
            
            carry = sum/10;
            Node *nxt = new Node(sum%10);
            tmp->next = nxt;
            tmp = tmp->next;
            
        }
        
        
        sumList = reverseList(sumList);
        
     
        return sumList;
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends