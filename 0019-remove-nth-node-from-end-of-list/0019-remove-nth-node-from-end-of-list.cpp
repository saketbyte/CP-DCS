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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp = head;
        int length = 0;
        while(temp!=NULL)
        {
            temp = temp->next;
            length++;
        }
        cout<<"length "<<length<<endl;
        if(length==1) return nullptr;
        int n_compliment = length-n-1;
        if(n_compliment==-1) return head->next;
        cout<<"n' "<<n_compliment<<endl;
        temp = head;
        cout<<"TEMP "<<endl;
        while(n_compliment>0)
        {
            cout<<"temp "<<temp->val;
            temp = temp->next;
            n_compliment--;
        }
        cout<<"tobedeleted "<<temp->next->val<<endl;
        ListNode *toBeDeleted = temp->next;
        temp->next = temp->next->next;
        
        delete toBeDeleted;
        return head;
        
    }
    
};