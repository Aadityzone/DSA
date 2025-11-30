#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data= value;
        left=right=nullptr;
    }
};

// Breath first serch
void BFS(Node* root){

}