#include<iostream>
using namespace std;
int main()
{
       long int i,n,a=0,b=1,c;
	
	cout<<"enter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<"  "<<a;
	}

}