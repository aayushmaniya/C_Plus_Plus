#include<iostream>
using namespace std;

#define n 5
int display(int a[])
{
	int min=a[0],i;
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"\nmin= "<<min;
}
int add(int b[])
{
	int max=b[0],i;
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
		max=b[i];
	}
cout<<"\nmax= "<<max;
}
int main()
{
	int arr[n],i;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter val:";
		cin>>arr[i];
	}
	display(arr);
	add(arr);
	
}