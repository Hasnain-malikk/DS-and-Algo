#include<iostream>
using namespace std;

#define size 10                    //size of array/queue

int queue[size];
int front = -1;
int rear = -1;                         //formula for circular queue = (rear + 1) % size

bool isEmpty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    return false;
}

void enqueue(int value)
{
    if((rear + 1) % size == front)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear = (rear+1) % size;
        queue[rear] = value;
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
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }    
    }
}

void showfront()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Element at front is = "<<queue[front];
    }
}

void displayqueue()
{
    if(isEmpty())
    {
       cout<<"Queue is empty"<<endl;
    }
    else
    {
        int i;
        if(front <= rear)
        {
            for( i = front; i <= rear; i++)
            {
                cout<<queue[i]<<" ";
            }
        }
        else
        {
            i = front;
            while(i < size)
            {
                cout<<queue[i]<<" ";
                i++;
            }

            i = 0;
            
            while(i <= rear)
            {
                cout<<queue[i];
                i++;
            }
        }
    }
}

int main()
{
    enqueue(2);
    enqueue(8);
    enqueue(5);
    enqueue(9);
    
    cout<<"Queue = ";
    displayqueue();
    cout<<endl;
    cout<<endl;

    dequeue();
    dequeue();
    
    cout<<"After Dequeue"<<endl;
    cout<<"Queue = ";
    

    displayqueue();
}

