#include<iostream>//N
using namespace std;

int main()
{
 int m,n;
 cout<<"Enter the value of col and row:--";
 cin>>m>>n;
 int mat[m][n];
 
  for(int i=0;i<m;i++)
 {
   for(int j=0;j<n;j++)
   {
    cout<<"Value at:-"<<"("<<i<<","<<j<<")";
 	cin>>mat[i][j];
   }
 }
 
    cout<<"WAVE Formation of this M*N Matrix is:-"<<endl;               
 
 for(int i=0;i<m;i++)
 {
   for(int j=0;j<n;j++)
   {
   
 	 cout<<mat[j][i]<<"-->";
   }
 }
 
	
	return 0;
}