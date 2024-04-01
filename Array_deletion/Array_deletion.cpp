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
	cout<<endl;
	cout<<endl;
	int del;
	cout<<"Enter element index you want to delete from 0 to "<<a-1<<": ";
	cin>>del;
	
	if( del<0 || del>a )
	{
		cout<<"Invalid entry"<<endl;
	}
	else
	{
		for(int i=del;i<=a-1;i++)
		{
			array[i]=array[i+1];
		}
		a--;
		cout<<endl;
	    cout<<"Array after deletion = ";
	
	    for(int i=0;i<a;i++)
	    {
		    cout<<array[i]<<" ";
	    }
	}
}










