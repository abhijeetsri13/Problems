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



Runtime: 4 ms, faster than 45.59% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 8.3 MB, less than 57.13% of C++ online submissions for Binary Tree Inorder Traversal.


 
 */
class Solution {
public:
    void inorder(vector<int> &out, TreeNode *root)
    {
        if(root == NULL)
            return;
        if(root->left!= NULL)
        {
            inorder(out, root->left);
        }
        out.push_back(root->val);
         if(root->right!= NULL)
        {
            inorder(out, root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> out;
        inorder(out, root);
        return out;
    }
};