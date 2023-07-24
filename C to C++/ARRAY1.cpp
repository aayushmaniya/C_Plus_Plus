#include<iostream>
using namespace std;
int main()
{
       int a[5],b[6],i,sum;
       
       for(i=0;i<4;i++)
       {
	cout<<"Enter value a["<<i<<"]:";
	cin>>a[i];
	cout<<"Enter value b["<<i<<"]:";
	cin>>b[i];
       }
       for(i=0;i<4;i++)
       {
	sum=a[i]+b[i] ;
	cout<<"\n"<<a[i]<< "+"<<b[i]<<"=" <<sum;
       }
       
}