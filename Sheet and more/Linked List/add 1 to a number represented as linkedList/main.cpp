// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends

// SOLUTION

/*
    This is a recursive approach here. We initially set the carry to 1.
    Use a helper function to execute the task. 
    Now, we will return to previous calls if our node is either null or reached null.

    So the control goes to previous call and checkif the data is 10 after adding one or not
    and then proceeds to previous calls.
    It will then finally return to the addOne function and then return the head node.
*/
class Solution
{
    public:
    
    int carry = 1;
    
    void adder(Node* temp)
    {
        if(temp == NULL)
            return;
        adder(temp->next);
        if(temp->data + carry == 10)
        {
        temp->data = 0;
        carry = 1;
        return;
        }
        temp->data = temp->data +carry;
        carry =0;
        
    }
    Node* addOne(Node *head) 
    {
        adder(head->next);
        head->data = head->data + carry;
        return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends