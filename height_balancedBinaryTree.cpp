/**
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.



 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };





 Runtime: 16 ms, faster than 23.38% of C++ online submissions for Balanced Binary Tree.
Memory Usage: 21.7 MB, less than 10.92% of C++ online submissions for Balanced Binary Tree.
 */
class Solution {
public:

    bool checkBalance(TreeNode* root, int *h)
    {
        if(root == NULL)
            return true;
        
        
        int l=0, r=0;
        bool l_res=false, r_res=false;
        l_res = checkBalance(root->left, &l) ;
        r_res = checkBalance(root->right , &r);
        
            
        *h =(l>r?l:r)+1;
        if(l-r>1 || l-r<-1)
            return false;
        
        return l_res&&r_res;
        
    }
    bool isBalanced(TreeNode* root) {
        int h=0;
        return checkBalance(root, &h);
    }
};