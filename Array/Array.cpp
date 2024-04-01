#include<iostream>
using namespace std;

int main()
{
	int a;
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
}
