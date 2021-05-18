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


Runtime: 4 ms, faster than 46.10% of C++ online submissions for Binary Tree Postorder Traversal.
Memory Usage: 8.5 MB, less than 54.82% of C++ online submissions for Binary Tree Postorder Traversal.


 
 */
class Solution {
public:
    void postorder(vector<int> &out, TreeNode *root)
    {
        if(root == NULL)
            return;
        if(root->left!= NULL)
        {
            postorder(out, root->left);
        }
         if(root->right!= NULL)
        {
            postorder(out, root->right);
        }
        out.push_back(root->val);

    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> out;
        postorder(out, root);
        return out;
    }
};