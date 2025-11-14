#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next; 
    // struct node* prev;
};

int main(){
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
// allocation of merory in heap

    head = new node();
    second = new node();
    third = new node();

    head->data = 1;
    // head->prev = NULL;
    head->next = second;

    second->data = 2;
    // second->prev = head;
    second->next = third;

    third->data = 3;
    // third->prev = second;
    third->next = NULL;

    struct node* ptr = head;  
    while(ptr != NULL){
        cout<<ptr->data<<endl;
         ptr = ptr->next;
    }

    return 0;           
}



