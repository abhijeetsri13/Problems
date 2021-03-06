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


 Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Preorder Traversal.
Memory Usage: 8.5 MB, less than 37.54% of C++ online submissions for Binary Tree Preorder Traversal.



 */
class Solution {
public:
/*    
    void preorder(vector<int> &out, TreeNode *root)
    {
        if(root == NULL)
            return;
        out.push_back(root->val);
        if(root->left!= NULL)
        {
            preorder(out, root->left);
        }
         if(root->right!= NULL)
        {
            preorder(out, root->right);
        }
    }
	*/
	        void preorderWithoutRecursion(vector<int> &out, TreeNode *root)
    {
        if(root == NULL)
            return;
        TreeNode *temp;//=root;
        std::stack<TreeNode*> st;
		st.push(root);
        
        while(st.empty()==false)
        {
		temp = st.top();
		out.push_back(temp->val);
		st.pop();
            
		if(temp->right!=NULL)
			st.push(temp->right);
            
		if(temp->left!=NULL)
			st.push(temp->left);
 		
		
        }
            
            
    }
	
	
    vector<int> preorderTraversal(TreeNode* root) {
          vector<int> out;
        preorder(out, root);
        return out;
    }
};