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
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        
        Node *end = head;
        Node *itr = head;
        Node *prev = NULL;
        
        Node *newHead = head;
        
        
        
        while(end->next!=NULL)
        {
            if(newHead->data %2 != 0 && end->data %2 == 0)
                newHead = newHead->next;
                
        
            end = end->next;
        }   
        
        Node* newEnd = end;
 
            
        while(itr!=end)
        {
            if(itr->data % 2 == 0)
                {
                   prev = itr;
                   itr = itr->next;
                }
            else
            {   
                
                
                if(prev!=NULL)
                {
                    newEnd->next = itr;
                    prev->next = itr->next;
                
                
                Node* temp = itr;
                
                itr=itr->next;
                temp->next = NULL;
                }
                else
                {
                    newEnd->next = itr;
                    Node* temp = itr;
                
                    itr=itr->next;
                    newEnd->next->next = NULL;
                    newEnd=newEnd->next;
                    
                }
                
                // newEnd -> next = itr;
                // newEnd = newEnd->next;
                // prev->next = itr->next;
                // itr = itr->next;
                // prev = prev->next;
                // newEnd->next = NULL;
                
            }
        }
        
        return newHead;
        
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends