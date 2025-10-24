# include<iostream>
using namespace std;

struct treesnode
{
    int data;
    treesnode*left;
    treesnode*right;

};


void preorder(treesnode*root, void(*visit)(int)){
    if(root!=NULL){
        visit(root->data);
        preorder(root->left, visit);
        preorder(root->right, visit);
        return;
    }
}

void inorder(treesnode*root, void(*visit)(int)){
    if(root!=NULL){
        inorder(root->left, visit);
        visit(root->data);
        inorder(root->right, visit);
        return;
    }          
}   
void postorder(treesnode*root, void(*visit)(int)){
    if(root!=NULL){
        postorder(root->left, visit);
        postorder(root->right, visit);
        visit(root->data);
        return;
    }
}
void visit(int data){
    cout<<data<<" ";
}   


// An expression tree is built from the simple operands and operators of an arithmetic or logical expression by placing 
//the simple operands as the leaves of the binary tree and operators as the interior nodes.

//when you traverse a tree in preorder it is known as prefix form
//when you traverse a tree in inorder it is known as infix form
//when you traverse a tree in postorder it is known as postfix form



