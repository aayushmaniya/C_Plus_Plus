#include<iostream>
using namespace std;

int main()
{
	int i,total=0;
	
	for(i=1;i<=5;i=i+2)
	{
	cout<<" "<<i;
		total+=i;
	}
	cout<<"\n total odd is:"<<total;
	
}