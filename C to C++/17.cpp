#include<iostream>
using namespace std;

int main()
{
	int i,total=0;
	
	for(i=2;i<=6;i=i+2)
	{
		cout<<" "<<i;
		total+=i;
	}
	cout<<"\n total even is:"<<total;
	
}
