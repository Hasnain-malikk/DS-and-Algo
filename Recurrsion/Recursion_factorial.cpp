#include<iostream>
using namespace std;
//Calling function inside that function is know as RECURSION.

int fact(int n)
{
	if(n<=1)               //Base condition
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);     //In fact(n-1) (n-1) is argument of fact : new argument
	}
}

//In this fucntion until if condition does'nt satisfied loop would'nt break 
//It is king of mixture of loop and if else


int main()
{
	int a;
	cout<<"Enter number for factorial : ";
	cin>>a;
	cout<<endl;
	cout<<"Factorial of "<<a<<" is "<<fact(a);
}
