/**
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).



 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };




 Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.
Memory Usage: 11.9 MB, less than 92.82% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.


 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        std::queue<TreeNode*> m_q;
        if(root!=NULL)
        m_q.push(root);
        vector<vector<int>> out;
        bool dir=false;
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
            if(dir==true)
            {
                reverse(level.begin(), level.end());
            }
            dir=!dir;
            out.push_back(level);
            
        }
        return out;
    }
    
};