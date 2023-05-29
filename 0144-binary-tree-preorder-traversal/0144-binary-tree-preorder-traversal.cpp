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
        
      vector<int> ans;
        if(p==NULL) return ans;
        stack<TreeNode*> stk;
        
        stk.push(p);
        
        while(!stk.empty())
        {
            p=stk.top();
            stk.pop();
            
            if(p!=NULL)
                ans.push_back(p->val);
            
            if(p->right!=NULL)
            
                stk.push(p->right);
            
            if(p->left!=NULL)
                stk.push(p->left);
            
        }
        
        return ans;
        
    }
};