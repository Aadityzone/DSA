#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};  
Node *createNode(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Node *insert(Node *root, int value)
{
    if (root == NULL)
    {
        return createNode(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    return root;
}
bool search(Node* root, int k) {
    if (root == NULL)
        return false;
    if (root->data == k)
        return true;
    else if (k < root->data)
        return search(root->left, k);
    else
        return search(root->right, k);
}

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
 Node*root=NULL;
 
 root=insert(root,50);
 insert(root,40);
 insert(root,80);
 insert(root,90);
 insert(root,70);
 insert(root,30);
 insert(root,20);

 cout<< " LVR inorder \n";
 inorder(root);
 cout<<endl;

 int k=90;
 if(search(root,k)){
    cout<<k<<" is found";
 }
 

    return 0;
}