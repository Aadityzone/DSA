#include <iostream>
using namespace std;

// Stack
class Stack
{

    int top;
    int n;
    int *arr;

public:
    Stack()
    {
        top = -1;
        n = 100;
        arr = new int[n];
    }

    void push(int value)
    {
        if (top >= n - 1)
        {
            cout << "Stack is overflow";
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " " << endl;
        }
    }

    void pop()
    {
        if (top <= 0)
        {
            cout << "dhf";
        }
        else
        {
            cout << arr[top] << " " << endl;
            top--;
        }
    }
    void display()
    {
        if (top < 0)
        {
            cout << "Stack is empty";
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " " << endl;
            }
        }
    }
};

// queue

#define SIZE 5

class Queue
{
    int arr[SIZE];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (rear == SIZE - 1)
        {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1)
            front = 0; // first insertion
        rear++;
        arr[rear] = value;
        cout << value << " inserted into queue.\n";
    }
    
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow! No element to delete.\n";
            return;
        }
        cout << arr[front] << " deleted from queue.\n";
        front++;
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.display();

    // s.pop();
    // s.display();

    // return 0;

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
