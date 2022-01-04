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
    
    
    ListNode* findMid(ListNode* first)
    {
        ListNode *slow = first, *fast = first;
        
        while(fast!=NULL && fast->next != NULL)
        {
            slow = slow->next;
            
            fast = fast->next;
            if(fast)
                fast = fast->next;
        }
        if(fast ==  NULL)
            return slow;
        else
            return slow->next;
    }
    
    ListNode* reverse(ListNode* first)
    {
        ListNode *temp = NULL, *current = first, *previous = NULL;
            
            while(current != NULL)
            {
                temp = current->next;
                current->next = previous;
                previous = current;
                current = temp;
            }
        
        return previous;
            
            
    }
    
    
    bool isPalindrome(ListNode* head) {
        
        ListNode *h = head;
        
        ListNode *mid = findMid(h);
        
        ListNode *h2 = reverse(mid);
        
        ListNode *h3 = head;
        
        
        while(h2!=NULL && h3 != NULL)
        {
            if(h2->val!=h3->val)
                return false;
            else
            {
                h2 = h2->next;
                h3 = h3->next;
            }
        }
        
        return true;
        
        
    }
};