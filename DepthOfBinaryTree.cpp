/*
104. Maximum Depth of Binary Tree
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.




Runtime: 4 ms, faster than 92.47% of C++ online submissions for Maximum Depth of Binary Tree.
Memory Usage: 18.8 MB, less than 51.18% of C++ online submissions for Maximum Depth of Binary Tree.

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
        
        CalDepth(root->left, depth+1);
        CalDepth(root->right, depth+1);
        if(this->depth< depth)
             this->depth = depth;
        
        return 0;
    }
};