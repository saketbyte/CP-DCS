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
    bool isSymmetric(TreeNode* root) {
        
        // TreeNode *l = root->left;
        // TreeNode *r = root->right;
        
        if(root->left == NULL && root->right == NULL) return true;
        if(root->left == NULL || root->right == NULL )return false;
        
        queue<TreeNode*> q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        TreeNode *a1, *a2;
        
        while(!q1.empty() && !q2.empty())
        {
            a1 = q1.front();
            a2 = q2.front();
            q1.pop();
            q2.pop();
            
            if(a1->val!=a2->val)
                return false;
            
            if(a1->left && a2->right)
            {
                q1.push(a1->left);
                q2.push(a2->right);
            }
            else
                if(a1->left || a2->right)
                    return false;
            
            if(a1->right && a2->left)
            {
                q1.push(a1->right);
                q2.push(a2->left);
            }
            else
                if(a1->right || a2->left)
                    return false;            
            
        }
        
        return true;
        
        
        
    }
};