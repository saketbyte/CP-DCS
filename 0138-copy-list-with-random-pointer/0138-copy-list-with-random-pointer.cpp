/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        
        Node *temp =head;
        cout<<"original"<<endl;
        while(temp)
        {
            cout<<temp<<" ";
            temp = temp->next;
        }
        
        // Node* curr = head;
        Node *curr = head; 
        if(head==NULL) return head;
        
        while(curr){
            
            Node *temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;  
        }
        
        curr = head;
        
//          Node *tem =curr;
//         cout<<"Duplicate"<<endl;
        
//         while(tem)
//         {
//             cout<<tem<<" ";
//             temp = tem->next;
//         }
        while(curr)
        {
            if(curr->random)
                 curr->next->random = curr->random->next;

// curr->next is my new LL node. whose random I am duplicating from original list.
             curr = curr->next->next;
            
        }
         Node* ans = new Node(0); // first node is a dummy node
        Node* helper =ans;
    
        while(head){
            // Copy the alternate added nodes from the old linklist
            helper->next=head->next;
            helper=helper->next;
            
            // Restoring the old linklist, by removing the alternative newly added nodes
            head->next=head->next->next;
            head=head->next; // go to next alternate node   
        }
        
        
        return ans->next; // Since first node is a dummy node
        
//         Node *original = head;
//         Node *copy = head->next;
//         Node *newHead = head->next;      
        
//         while(original) // && copy->next
//         {
//             original->next = original->next->next;
           
//             copy->next = copy->next!=NULL? copy->next->next:copy->next;
//             original = original->next;
//             copy = copy->next;
//         }
        
//         return newHead;
    }
};