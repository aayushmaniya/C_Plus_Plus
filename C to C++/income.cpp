#include <iostream>
using namespace std;
int main()
{
	int a,c,d,e,f,x,y,r,s;
	cout<<"\nEnter Income=";
	cin>>a;
	if(a<=2500)
	{
		c=a*0;
		d=a;
	    cout<<"your tax is "<<c<<" rs per income";
		cout<<"\nyour income is"<<d<<"rs after cutting tax";
	}
	else if(2500<a && a<=5000)
	{
		e=(a-2500)*0.1;
		f=a-e;
		cout<<"your tax is "<<e<<" rs per income";
		cout<<"\nyour income is "<<f<< " rs after cutting tax";
	}
	
	else if(5000<a && a<=10000)
	{
		x=250+(a-5000)*0.2;
		y=a-x;
		cout<<"your tax is" <<x<< " rs per income";
		cout<<"\nyour income is" <<y<< " rs after cutting tax";
	}
	
	else
	{
		r=250+1000+(a-10000)*0.3;
		s=a-r;
		cout<<"your slab is "<<r<<" rs per income";
		cout<<"\nyour income is"<<s<<" rs after cutting tax";
	}
		
	return 0;
}	