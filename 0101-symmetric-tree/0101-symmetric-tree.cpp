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
        
         return isSymmetricTest(root->left,root->right);
    }
    
    bool isSymmetricTest(TreeNode* p , TreeNode* q){
        
        if(p == NULL && q == NULL) return true;
        if(p == NULL)return false;
        if(q == NULL) return false;
        queue<TreeNode*>q1, q2;
        
        q1.push(p);
        q2.push(q);
        while(!q1.empty() || !q2.empty()){
            TreeNode* a1 = q1.front();
            TreeNode* a2 = q2.front();
            
            if(a1-> val != a2->val) return false; // not a same tree
            q1.pop();
            q2.pop();
            //check for there left and right subtrees 
            if(a1->left  && a2->right ){
                q1.push(a1->left);
                q2.push(a2->right);
            }
            else if(a1->left || a2->right){
                return false;
                
            }
            if(a1->right && a2->left){
                q1.push(a1->right);
                q2.push(a2->left);
            }
            else if ( a1->right || a2->left){
                 return false;
            }
        }
        return true;
        
//         if(p == NULL && q == NULL) //left & right node is NULL 
//             return true; 
        
//         else if(p == NULL || q == NULL) //one of them is Not NULL
//             return false; 
        
//         else if(p->val!=q->val) 
//             return false;
        
//         return isSymmetricTest(p->left,q->right) && isSymmetricTest(p->right,q->left); //comparing left subtree's left child with right subtree's right child --AND-- comparing left subtree's right child with right subtree's left child
    }
};