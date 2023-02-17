/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // cout<<"Function call with head as "<<head->val;
        cout<<" Addressed at"<<head<<endl;
      
        if(head == NULL || head->next == NULL) 
        {
            // cout<<"base case returned at head val = "<<head->val<<" with address "<<head<<endl;
            
            return head;
        }
        
        ListNode* newHead = reverseList(head->next);
         cout<<"Tail recursion while backtracking = "<<head->val;
        cout<<" Addressed at"<<head<<endl;        
        head->next->next = head;
        cout<<" Above step was"<<head->next<<"="<<head->next->next<<endl;
        head->next = NULL;
        cout<<"------end------"<<endl;
        return newHead;
       
        
    }
};