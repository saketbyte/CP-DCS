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
    
    ListNode* merge(ListNode* left, ListNode* right)
    {
        
        ListNode dummy(0);
        ListNode* linker = &dummy;
        
        while(left && right)
        {
            if(left->val < right->val)
            {
                linker->next = left;
                left = left->next;
            }
            else
            {
                linker->next = right;
                right = right->next;
            }
            
            linker = linker->next;
        }
        
        if(left)
            linker->next = left;
        if(right)
            linker->next = right;
        
        return dummy.next;
        
        
    }
    
    
    ListNode* sortList(ListNode* head) 
    {
        
        
        if(head ==NULL || head->next == NULL)
            return head;
        
        ListNode* left  = head;
        

        
        
        ListNode *fast = head->next;
        ListNode *slow = head;
        
        while(fast != NULL && fast->next !=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
       ListNode* right = slow->next;
        // ListNode* right = mid;
        slow->next = NULL;
        
        left = sortList(left);
        right = sortList(right);
        
        return merge(left, right);
        
    }
};