#include <iostream>
using namespace std;
int main() 
{
int i,j,n;
cout<<"Enter No. of Rows:- ";
cin>>n;
for(i=0;i<n;i++)
{
    for(j=1;j<=n-i;j++)
    {
       cout<<" "<<" ";      
    }
    for(int k=0;k<=n-j;k++) 
    {
       cout<<"*"<<" ";

    }
    
    for(int l=0;l<i-1;l++)
    {  
      cout<<"*"<<" ";
	 }
   
   cout<<endl;
}
}