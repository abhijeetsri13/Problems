/**
 * Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

 

Runtime: 52 ms, faster than 46.07% of C++ online submissions for Serialize and Deserialize Binary Tree.
Memory Usage: 40.6 MB, less than 33.21% of C++ online submissions for Serialize and Deserialize Binary Tree.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    int index=0;
    string dser;
    //string res;
    
    string preorder(TreeNode *root)
    {
        if(root == NULL)
            return "null";
        else
            return to_string(root->val)+"," + preorder(root->left) + ","+preorder(root->right);
    }
    
    string serialize(TreeNode* root) {
        if(root)
            return "["+preorder(root)+"]";
        return "[]";
    }

    
    TreeNode* construct_tree()
    {
  if(index > dser.size() || dser[index] == 'n')
        {
            index+=5;
            return NULL;
        }
        string temp;
        while(dser[index] != ',')
            temp += dser[index++];
        TreeNode* root = new TreeNode(stoi(temp));
        index++;
        root->left = construct_tree();
        root->right = construct_tree();
        return root;
    }
    
    
    
    
    
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        index =0 ;
        if(data == "[]")
            return NULL;
        dser =data.substr(1,data.length()-1);
 // cout<<"Deserial "<<dser<<endl;
       
    //    clock_t start, end;
    //    start = clock();
        TreeNode *out =construct_tree();
  //       end = clock();
  //       double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
 //   cout << "Time taken by program is : " << fixed 
 //        << time_taken << setprecision(5);
//    cout << " sec " << endl;
        
        
        return out;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));