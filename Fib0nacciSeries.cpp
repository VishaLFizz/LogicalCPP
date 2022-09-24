#include<iostream>
using namespace std;
int main()
{
 int a=0,b=1,c,i,N;
 cout<<"Enter the last digit to print Fib series:- "<<endl;
 cin>>N;
 
cout<<"Fibonacci Series:-";
 if (N==0)//0th element 
 {
 	cout<<a<<endl;
 }
 if(N==1)//1st element
 {
 	cout<<b<<endl;
 }
 for(i=2;i<=N;i++)// from element 2 to N
 {
 	c=a+b;
 	a=b;
 	b=c;
   
    for(int j=i;j<=i;j++)
	{
	  cout<<c<<",";
    }

 }
}
