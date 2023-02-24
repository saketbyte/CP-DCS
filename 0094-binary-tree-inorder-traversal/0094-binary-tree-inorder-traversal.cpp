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
    
 vector<int> inorderTraversal(TreeNode* root) {
        
      stack<TreeNode*> stk;
     vector<int> ans;
     
     while(!stk.empty() || root!=NULL)
     {
         if(root)
         {
             stk.push(root);
             root = root->left;
         }
         else
         {
             TreeNode* x = stk.top();
             ans.push_back(x->val);
             stk.pop();
             root = x->right;
         }
     }
        return ans;
    }
};