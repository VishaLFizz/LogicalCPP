#include <iostream>
using namespace std;
int main() 
{
int i,j,n,x=2;
cout<<"Enter the no. of rows:-";
cin>>n;
for(i=1;i<=n;i++)
{   
    for(j=1;j<=i;j++)
    {
       cout<<i<<" ";      
    }
    for(j=2;j<=(n-i)+1;j++)
    {
       	cout<<j<<" ";
  	}

    cout<<endl;

}

}