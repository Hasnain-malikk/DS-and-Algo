#include<iostream>
using namespace std;

#define size 10

int queue[size];
int front=-1;
int rear=-1;


bool isEmpty()
{
	if(front==-1 && rear==-1)
	{
		return true;
	}
	return false;
}

void EnQueue(int value)
{
	if(rear==size-1)
	{
		cout<<"Queue if Full"<<endl;
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		else
		{
			rear++;
			queue[rear]=value;
		}
	}
}

void DeQueue()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		if(front == rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}

void showfront()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		cout<<"Front = "<<queue[front]<<endl;
		
	}
}

void display()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		cout<<"Queue = ";
		for(int i=front ; i<=rear ; i++)
		{
			cout<<queue[i]<<" ";
		}
	}
}

int main()
{
	EnQueue(123);
	EnQueue(33);
	EnQueue(76);
	EnQueue(2);
	EnQueue(10);
	EnQueue(109);
	
	
	display();
	cout<<endl;
	showfront();
	cout<<endl;
	
	
	cout<<"After dequeue ";
	DeQueue();
	
	
	display();
	cout<<endl;
	showfront();
	


}


