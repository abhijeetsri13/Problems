/**
Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.

 


Runtime: 32 ms, faster than 88.54% of C++ online submissions for Two Sum IV - Input is a BST.
Memory Usage: 39.2 MB, less than 21.53% of C++ online submissions for Two Sum IV - Input is a BST.

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
    std::set<int> sum; 
    bool inorderfind(TreeNode *root,  int &k)
    {
        
        if(root ==NULL)
            return false;
        
        if(inorderfind(root->left, k))
            return true;
        
        if(sum.find(k - root->val)!=sum.end())
            return true;
        else
            sum.insert(root->val);
        
        return inorderfind(root->right, k);
    }
        
        
    bool findTarget(TreeNode* root, int k) {
       
        return inorderfind(root, k);
            return true;
        return false;
    }
};