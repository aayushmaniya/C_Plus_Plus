#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\n Entercout<< x:";
	cin>>x;
	
	cout<<"\n Enter y:";
	cin>>y;
	if(x<2000||x>3000)
	{
		cout<<"\nx= "<<x;
	}
	if(y>100&&y<200)
	{
		cout<<"\ny= "<<y;
	}
	return 0;
}