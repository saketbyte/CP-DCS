/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* p) {
        
        stack<TreeNode*> stk;
        vector<int> ans;
        
        while(p!=nullptr || !stk.empty())
        {
            
            if(p!=nullptr)
            {
                ans.push_back(p->val);
                stk.push(p);
                p=p->left;
            }
            else
            {
                p = stk.top();
                stk.pop();
                p=p->right;
                
            }
        }
        return ans;
        
    }
};