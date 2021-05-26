/**
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”


 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };





 Runtime: 12 ms, faster than 93.52% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.
Memory Usage: 14.3 MB, less than 23.58% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.
 */
class Solution {
public:
    TreeNode* searchLCA(TreeNode* root, TreeNode* p, TreeNode* q, bool &p_bool, bool &q_bool)
    {
        
        if(root == NULL)
            return NULL;
        TreeNode *node_left, *node_right;
        if(root->val == p->val)
        {
            p_bool=true;
            return root;
        }
        else if(root->val == q->val)
        {    q_bool=true;
             return root;
        }
        else{
            node_left = searchLCA(root->left, p, q, p_bool, q_bool);
            node_right = searchLCA(root->right, p, q, p_bool, q_bool);
            if(node_left && node_right)
                return root;
            if(node_left)
                return node_left;
            return node_right;
        }
            
    }
    bool searchNodebyVal(TreeNode *root, int val)
    {
        if(root== NULL)
            return false;
        if(root->val == val || searchNodebyVal(root->left, val) || searchNodebyVal(root->right, val))
            return true;
        return false;
    }
    // here in problem statement it is specified that both node will exist however handling for -ve scenario
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool p_bool=false, q_bool=false;
        TreeNode* lca_node = searchLCA(root, p, q, p_bool, q_bool);
       
        if(p_bool && q_bool || p_bool&& searchNodebyVal(lca_node, q->val ) || q_bool&& searchNodebyVal(lca_node, p->val ) )
            return lca_node;
        
        return NULL;
    }
};