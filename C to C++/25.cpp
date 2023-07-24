#include<iostream>
using namespace std;

int main()
{
	int i;
	for(i=0;i<=24;i+=2)
	{
			if(i%4==0)
			{
				cout<<"  "<<(i+65);
			}
			else 
			{
				cout<<" "<<(i+97);
			}
		
	}
	
} 
