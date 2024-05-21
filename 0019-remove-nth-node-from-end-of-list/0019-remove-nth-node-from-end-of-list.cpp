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
        int n_compliment = length-n-1;
        
        // edge case
        if(n_compliment==-1) return head->next;
        temp = head;
        while(n_compliment>0)
        {
            temp = temp->next;
            n_compliment--;
        }
        ListNode *toBeDeleted = temp->next;
        temp->next = temp->next->next;
        
        delete toBeDeleted;
        return head;
        
    }
    
};