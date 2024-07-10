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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(!lists.size()) return nullptr;
        
        ListNode *ans = new ListNode(-1);
        ListNode *temp = ans;
        
priority_queue< pair<int, int>,
                vector<pair<int,int>>,
                greater<pair<int,int>>> pq;
        
        
        for(int i =0;i<lists.size(); i++)
           { 
                if(lists[i]!=nullptr)
                pq.push({lists[i]->val, i});
            }
           
        
        
        while(!pq.empty())
        {
            
            int value = pq.top().first;
            int kaunsi = pq.top().second;
            pq.pop();
            cout<<"value"<<value<<" from list "<<kaunsi<<endl;
            
            temp->next = lists[kaunsi];
            temp = temp->next;
            // if(!lists[i]->next)
            lists[kaunsi] = lists[kaunsi]->next;

            if(lists[kaunsi])
            {
                pq.push({lists[kaunsi]->val, kaunsi});
            }
            
        }
        
        return ans->next;
        
        
        
        
        
        
        
    }
};