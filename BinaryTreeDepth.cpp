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
int depth;
    public:
    int maxDepth(TreeNode* root) {
        if(root!=NULL){
            CalDepth(root, 1);
            return this->depth;
        }
        else
            return 0;
    }
    int CalDepth(TreeNode* root, int depth)
    {
        if(root==NULL)
            return 0;
        

        if(root->left!=NULL)
        {
            
            CalDepth(root->left, depth+1);
        }
        
        if(root->right!=NULL)
        {
           
            CalDepth(root->right, depth+1);
        }
        if(this->depth< depth)
             this->depth = depth;
        
        return 0;
    }
};