#include<iostream>
using namespace std;

#define n 5
int display(int a[])
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<" "<<a[i];
		}
		else
		{
			sum=a[i]+a[i-1];
			cout<<"\n"<<a[i]<<"\t"<<sum;
		}
	}
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

}