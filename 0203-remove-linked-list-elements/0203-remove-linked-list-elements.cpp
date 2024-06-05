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
    ListNode* removeElements(ListNode* head, int val) {
        // Base Condition
        if(!head) return NULL;
		
		// Delete the nodes that are on the right of our current node
        head->next = removeElements(head->next, val);
		
		// Omit current node if this has to be deleted or else keep this node 
        return (head->val==val)? head->next:head;
    }
};