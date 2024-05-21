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
    
    ListNode* reverse(ListNode *temp)
    {
        ListNode *prev = NULL, *curr = temp, *front = NULL;
        
        while(curr)
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        
        return prev;
    }
    
    
    bool isPalindrome(ListNode* head) {
        
        if( !head || !head->next) return true;
        
        ListNode *slow =head, *fast = head;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *mid = fast?slow->next:slow;
        
        ListNode *revList = reverse(mid);
        
        while(revList)
        {
            if(revList->val != head->val)
                return false;
            
            revList = revList->next;
            head = head->next;
        }
        return true;
    }
};