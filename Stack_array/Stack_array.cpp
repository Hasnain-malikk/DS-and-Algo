#include<iostream>
using namespace std;

#define size 10

int arr[size];
int top=-1;

bool isEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull()
{
	if(top==size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push(int data)
{
	if(isFull())
	{
		cout<<"Stack overflow"<<endl;
	}
	else
	{
		top++;
		arr[top]=data;
	}
}

void pop()
{
	if(isEmpty())
	{
		cout<<"Stack underflow"<<endl;
	}
	else
	{
		top--;
	}
}

void display()
{
	if(isEmpty())
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
	{
		cout<<"Stack"<<endl;
		for(int i=0;i<=top;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}

void showtop()
{
	if(isEmpty())
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
	{
		cout<<"Top ="<<arr[top]<<endl;
	}
}
int main()
{
	push(12);
	push(44);
	push(55);
	push(18);
	push(64);
	display();
	cout<<endl;
	cout<<endl;
	
	pop();
	pop();
	cout<<"After POP ";
	display();
	cout<<endl;
	showtop();
}
