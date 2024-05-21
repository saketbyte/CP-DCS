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
    ListNode* rotateRight(ListNode* head, int k) {
        
                if(!head || !head->next) return head;

        int length  = 0;
        
        ListNode *temp = head;
        
        while(temp) length++,temp=temp->next;
        
        k = k%length;
        
        
        
        int k_dash = length-k-1;
        
        if(k_dash == -1 || k ==0 ) return head;
        
        temp = head;
        while(k_dash--)
        {
            temp = temp->next;
        }
        
        ListNode * newHead = temp->next;
        temp->next = NULL;
        
        temp = newHead;
        while( temp->next)
        {
            temp=temp->next;
        }
        
        temp->next = head;
        
        return newHead;
    }
};