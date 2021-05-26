/**
199. Binary Tree Right Side View
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

 







 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };





 Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Right Side View.
Memory Usage: 12 MB, less than 67.28% of C++ online submissions for Binary Tree Right Side View.
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> out;
        if(root == NULL)
            return out;
        
        std::queue<TreeNode*> st;
        st.push(root);
            
        
        while(!st.empty())
        {
            int intial_sz =st.size(); 
            out.push_back(st.back()->val);
            for(int i=0;i<intial_sz;i++)
            {
                TreeNode* temp= st.front();
                st.pop();
                if(temp->left!=NULL)
                    st.push(temp->left);
                
                if(temp->right!=NULL)
                    st.push(temp->right);
                
                
            }
            
        }
        return out;
    }
};