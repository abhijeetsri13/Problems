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

Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]



Runtime: 8 ms, faster than 35.33% of C++ online submissions for Binary Tree Level Order Traversal.
Memory Usage: 12.4 MB, less than 94.48% of C++ online submissions for Binary Tree Level Order Traversal.
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::queue<TreeNode*> m_q;
        if(root!=NULL)
        m_q.push(root);
        vector<vector<int>> out;
        while(!m_q.empty())
        {
            vector<int> level;
            int initial_sz = m_q.size();
            
            
            for(int i=0;i<initial_sz;i++){
                if(m_q.front()->left != NULL)
                    m_q.push(m_q.front()->left);
                if(m_q.front()->right != NULL)
                    m_q.push(m_q.front()->right);
                
                level.push_back(m_q.front()->val);
                m_q.pop();
            }
            out.push_back(level);
            
        }
        return out;
    }
};