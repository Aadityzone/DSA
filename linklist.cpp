#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class linklist
{

public:
    Node *head;
    linklist()
    {
        this->head = nullptr;
    }

    // inscert a element in end a of link list
    void incretAtEnd(int data)
    {
        Node *newnode = new Node(data);
        if (head == nullptr)
        {
            head = newnode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newnode;
    }

    // insert a node at beginnning

    void addInBeg(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // insert a element at specific position

    void insertAtPosition(Node *&head, int data, int pos)
    {

        Node *newNode = new Node(data);

        if (pos < 1)
        {
            cout << "pod is invailed";
            delete newNode;
            return;
        }

        if (pos == 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node *temp = head;
        for (int i = 1; temp != nullptr && i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == nullptr)
        {
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // delete a element at  specific position

    void deleteAtPosition(Node *&head,int pos){
        

        if(head==nullptr){
            cout<<"list is emtpy";
        }
        if(pos<1){
            cout<<"pos is invaied";
            return;
        }
        Node*temp=head;
        if(pos==1){
            head=temp->next;
            delete temp;
            return;
        }

        for(int i=1;temp!=nullptr&& i<pos-1;i++){
            temp=temp->next;
        }

        if(temp==nullptr|| temp->next ==nullptr){
            cout<<"position out of range ";
            return;

        }

        Node* nodeToDelete=temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    // print the link list
    void printLinkList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "null" << endl;
    }

    // deleted a node by value

    void deleteNode(int value)
    {
        if (head == nullptr)
            return;

        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *curr = head;
        Node *prev = nullptr;

        while (curr != nullptr && curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr)
            return;

        prev->next = curr->next;
        delete curr;
    }

    // free all node

    ~linklist()
    {
        Node *temp;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    linklist list;

    list.incretAtEnd(10);
    list.incretAtEnd(70);
    list.incretAtEnd(30);
    list.incretAtEnd(20);

    cout << "incretAtEnd : ";
    list.printLinkList();

    list.addInBeg(5);
    list.addInBeg(25);
    list.addInBeg(15);
    list.addInBeg(45);
    cout << "addinbeg  :";
    list.printLinkList();

    list.deleteNode(20);
    cout << "delete :";
    list.printLinkList();

    list.insertAtPosition(list.head, 56, 5);
    list.printLinkList();

    list.deleteAtPosition(list.head,4);
    list.printLinkList();

}

