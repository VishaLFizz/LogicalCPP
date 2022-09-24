#include <iostream>
using namespace std;
int main() 
{
  int n =5,i,j;
  char k;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=(n-i)+1;j++)
  	{
  		k=char(j+64);
  		cout<<k<<" ";
	  }
	  cout<<endl;
  }
	
	 
	
	
}
