#include<iostream>
using namespace std;
int main()
{
 char a,j,i,sp=10,n=65;
 
 for(i=1;i<=5;i++)
 {
 for(j=1;j<=sp;j++)
 {
 cout<<" ";
 }
 for(j=1;j<=i;j++)
 {

   cout<<"  "<<(j+64);
}
 cout<<"\n";
 sp-=2;

  }
	for(i=6;i>=1;i--)
	{
	for (j=1;j<=sp;j++)
	{
	cout<<" ";
	}
		for(j=1;j<=i;j++)
		{
			cout<<"  "<<(64+j);
			}
		cout<<" \n";
		sp+=2;
	}
  
}