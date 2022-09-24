#include<iostream>
using namespace std;
int main()
{
int N,countodd=0,counteven=0,D;
cout<<"Enter the digit:- ";
cin>>N;
    while(N>0)
     {
        D=N%10;
  	   counteven=counteven+D;
        N=N/10;
        D=N%10;
         countodd=countodd+D;
        
                N=N/10;
     }
cout<<"sum of ODD's:- "<<countodd<<endl<<"sum of Even's:- "<<counteven;

}