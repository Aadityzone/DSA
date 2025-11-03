#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

auto TREE_SORT(struct Node *x, int k)
{
    if (x == NULL || k == x->data)
    {
        return x;
    }
    else if (k < x->data)
    {
        return TREE_SORT(x->left, k);
    }
    else
        return TREE_SORT(x->right, k);
}
int main()
{
    
    return 0;
}