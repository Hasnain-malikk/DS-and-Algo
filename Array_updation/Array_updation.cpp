#include<iostream>
using namespace std;

int main()
{
	int a;
	int pos;
	int elem;
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
	
	
	cout<<"Initial Array= ";
	for(int i=0;i<a;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter position which you want to update: ";
	cin>>pos;
	cout<<"Enter element you want to update: ";
	cin>>elem;
	
	array[pos-1]=elem;
	cout<<endl;
	cout<<"After updation"<<endl;
	cout<<"New array= ";
	for(int i=0;i<a;i++)
	{
		cout<<array[i]<<" ";
	}
	
	
}
