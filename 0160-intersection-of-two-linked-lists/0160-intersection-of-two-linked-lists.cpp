/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        ListNode *A = headA, *B = headB;
        
        int a = 0, b =0;
        
        while(A) A= A->next, a++;
        while(B) B= B->next, b++;
        
        ListNode *longer = a>b? headA:headB;
        ListNode *shorter = a>b?headB:headA;
        int diff=0;
        
        if(longer==headA) diff= a-b;
        else diff = b-a;
        
        ListNode* mover = longer;
        
        while(diff--)
        {
            mover = mover->next;
        }
        
        while(mover!=shorter)
        {
            mover = mover->next;
            shorter = shorter->next;
        }
        return mover;
        
    }
};