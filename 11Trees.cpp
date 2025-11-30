#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class Tree
{
public:
    Node *root;
    Tree()
    {
        root = nullptr;
    }

    // insert a elements in tree

    Node *Insert(Node *root, int value)
    {
        if (root == nullptr)
        {
            return new Node(value);
        }
        if (value < root->data)
        {
            root->left = Insert(root->left, value);
        }
        else
        {
            root->right = Insert(root->right, value);
        }
    }

    void insertValue(int value)
    {
        root = Insert(root, value);
    }

    // min sub tree
    Node *findMin(Node *root)
    {
        while (root->left != nullptr)
        {
            root = root->left;
        }
        return root;
    }
    // delete element from tree

    Node *deleteNode(Node *root, int value)
    {
        if (root == nullptr)
            return root;

        if (value < root->data)
        {
            root->left = deleteNode(root->left, value);
        }
        else if (value > root->data)
        {
            root->right = deleteNode(root->right, value);
        }
        else
        {

            if (root->left == nullptr && root->right == nullptr)
            {
                delete root;
                return nullptr;
            }

            else if (root->left == nullptr)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == nullptr)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }

            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }

        return root;
    }

    // serching in tree

    bool serch(Node *root, int value)
    {
        if (root == nullptr)
            return false;
        if (value == root->data)
            return true;
        if (value < root->data)
            return serch(root->left, value);
        else
            return serch(root->right, value);
    }

    // delete function
    void deleteValue(int value)
    {
        while (serch(root,value))
        {
            root = deleteNode(root, value);
        }
    }
    // inorder of tree
    void inorder(Node *root)
    {
        if (root == NULL)
            return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void printInorder()
    {
        inorder(root);
    }
};

int main()
{
    Tree T1;
    int n, value;
    cout << "How many values to insert? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> value;
        T1.insertValue(value);
    }

    cout << "Enter value to delete: ";
    cin >> value;
    T1.deleteValue(value);
    cout << "Inoder traversal: ";
    T1.printInorder();
}