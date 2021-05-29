#include<iostream>
class node {
public:
    int key;
    node* left;
    node* right;
};
 
/* Helper function that allocates a new node with the given key and
NULL left and right pointers.*/
node* newNode(int key)
{
    node* Node = new node();
    Node->key = key;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
using namespace std;

int Ceil(node *root, int i)
{
	if(root == NULL)
	{
		return -1;
	}
	if(root->key == i)
	{
		return i;
	}
	if(root->key < i)
		return Ceil(root->right, i);
	int ceil = Ceil(root->left, i);

	return ceil>=i?ceil:root->key;
}

int main()
{
	node* root = newNode(8);
 
    root->left = newNode(4);
    root->right = newNode(12);
 
    root->left->left = newNode(2);
    root->left->right = newNode(6);
 
    root->right->left = newNode(10);
    root->right->right = newNode(14);
 
    for (int i = 0; i < 16; i++)
        cout << i << " " << Ceil(root, i) << endl;	

    return 0;
}