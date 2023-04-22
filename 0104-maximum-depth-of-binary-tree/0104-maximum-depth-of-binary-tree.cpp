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
   int maxDepth(TreeNode* root) 
    {
		// If root is NULL
        if(!root)
            return 0;
        
		// Create a variable to store the maximum depth
        int height = 0;
        
		// Create a queue
        queue<TreeNode*> q;
		
		// Push root to the queue
        q.push(root);
        
		// Loop until queue is not empty
        while(!q.empty())
        {
			// Increment height
            height++;
			
			// Total nodes in the current level IMPORTANT
            int n = q.size();
            
			// Loop for each level and push into queue untill the level is traced entirely. Once done, we move to next level. 
            while(n--)
            {
                TreeNode* curr = q.front();
                q.pop();
                
				// If left child exists
                if(curr->left)
                    q.push(curr->left);
                
				// If right child exists
                if(curr->right)
                    q.push(curr->right);
            }
        }
        
		// Return maximum depth
        return height;
    }
};