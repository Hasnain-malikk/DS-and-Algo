#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node *front = NULL;
Node *rear = NULL;

bool isEmpty()
{
    if(front == NULL && rear == NULL)
    {
        return true;
    }
    return false;
}

void enqueue(int value)
{
    Node* ptr = new Node();
    ptr -> data = value;
    ptr -> next = NULL;

    if(front == NULL)              //if we inserted first node in queue then we move the front to first node, similarly we move rear as well.
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear -> next = ptr;
        rear = ptr;
    }
}

void dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        if(front == rear)
        {
            delete(front);
            front = rear = NULL;
        }
        else
        {
            Node * ptr = front;
            front = front -> next;
            delete(ptr);
        }
    }
}

void showFront()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Element at front is = "<<front -> data<<endl;
    }
}

void displayQueue()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        Node *ptr = front;
        while(ptr != NULL)
        {
            cout<<ptr -> data<<" ";
            ptr = ptr -> next;
        }
    }
    cout<<endl;
}

int main()
{
    enqueue(5);
    enqueue(9);
    enqueue(18);
    enqueue(23);
    
    cout<<"Queue = ";
	displayQueue();  
	cout<<endl;

    dequeue();
    dequeue();
    
    cout<<"After dequeue"<<endl;
    cout<<"Queue = ";
    

    
    displayQueue();
    

    showFront();


}
