#include<iostream>
using namespace std;

int main()
{
	int a;
	int element;
	cout<<"Enter size of array: ";
	cin>>a;
	cout<<endl;
	
	int array[a]={};
	
	for(int i=0;i<a;i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>array[i];
	}
	cout<<endl;
	
	
	cout<<"Array= ";
	for(int i=0;i<a;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter element to insert in array: ";
	cin>>element;
	a=a+1;
	array[a-1]=element;
	
	cout<<endl;
	
	cout<<"Array after insertion = ";
	for(int i=0;i<a;i++)
	{
		cout<<array[i]<<" ";
	}
	
	
	
}
