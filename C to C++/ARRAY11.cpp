#include<iostream>
using namespace std;

int main()
{
   int a[5][5],i,j;
 
	for(i=0;i<3;i++)
	{
	     for(j=0;j<3;j++)
	     {
		  cout<<"enter value a["<<i<<"]["<<j<<"]:";
		  cin>>a[i][j];
	     }
	}
	for(i=0;i<3;i++)
	{
	     for(j=0;j<3;j++)
		{
		  cout<<"  "<<a[i][j];
		}
	    cout<<"\n" ;
	 }
	cout<<"\ndiagonal total="<<(a[0][0]+a[1][1]+a[2][2]);
	 cout<<"\nlower triangle total="<<(a[1][0]+a[2][0]+a[2][1]);
	 cout<<"\nupper triangle tota"<<(a[0][1]+a[0][2]+a[1][2]);
  
}