#include<iostream>
using namespace std;
int factorial(int a)
{
	int fact =1;
	for(int i=a;i>=1;i--)
	{
		fact =fact*i;
	}
}
int main()
{
	int N;
	cout<<"Enter the No. for Factorial:- ";
	cin>>N;
	cout<<"Factorial Of No. :- "<<factorial(N);
}