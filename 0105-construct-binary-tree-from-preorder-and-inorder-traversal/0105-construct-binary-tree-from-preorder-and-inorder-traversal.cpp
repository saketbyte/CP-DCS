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
    
    
    TreeNode* makeATreeAt1111(vector<int>&pre, vector<int> &in )
    {
        if(in.size()==0 || pre.size()==0)
            return nullptr;
        
        TreeNode* root = new TreeNode(pre[0]);
        pre.erase(pre.begin());
        
        
        auto mid = find(in.begin(), in.end(), root->val);

        vector<int> leftIn = vector<int>(in.begin(), mid);
        vector<int> rightIn = vector<int>(++mid, in.end()); 
            
        root->left = makeATreeAt1111(pre, leftIn);
        root->right = makeATreeAt1111(pre, rightIn);
            
            return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        
        return makeATreeAt1111(preorder, inorder);
    }
};