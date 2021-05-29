#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has key, left child and right child */
struct Node {
    int key;
    Node *left, *right;
 
    Node(int value)
    {
        key = value;
        left = right = NULL;
    }
};
 
void findFloorCeil(Node *root, int i, int &floor, int &ceil)
{
    while(root!=NULL)
    {
        if(root->key == i)
            {
            floor = root->key;
            ceil = root->key;

            return;
            }
        if(root->key > i )
        {
            ceil = root->key;
            root=root->left;
        }
        else
        {
            floor  = root->key;
            root= root->right;
        }


    }

    return ;
}




void floorCeilBST(Node *root, int i)
{
    
    int floor=INT_MIN, ceil=INT_MIN;

    findFloorCeil(root, i , floor, ceil);
    cout<<"For i= "<<i<<" Floor :"<<floor<<" Ceil: "<<ceil<<endl;

}



int main()
{
    Node* root = new Node(8);
 
    root->left = new Node(4);
    root->right = new Node(12);
 
    root->left->left = new Node(2);
    root->left->right = new Node(6);
 
    root->right->left = new Node(10);
    root->right->right = new Node(14);
 
    for (int i = 0; i < 16; i++)
        floorCeilBST(root, i);
 
    return 0;
}