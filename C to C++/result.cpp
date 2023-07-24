#include<iostream>
using namespace std;
int main()
{
	float Maths,English,Chemistry,Physics,Total,Percent;
	cout<<" Enter the marks of Maths:";
	cin>>Maths;
	cout<<" \n Enter the marks of Physics:";
	cin>>English;
	cout<<" \n Enter the marks of Chemistry:";
	cin>>Chemistry;
	cout<<" \n Enter the marks of English:";
	cin>>Physics;
	Total=Maths+English+Chemistry+Physics;
	cout<<"\nTotal Marks="<<Total;
	Percent=Total/4;
	cout<<"\nTotal Percent= "<<Percent;
	if(Maths>=40 && English>=40 && Physics>=40 && Chemistry>=40)	
	{
	cout<<"\n Pass";
	}
	else 
	{
	cout<<"\n Fail";
	}
	 if(Percent>75)
	{
		cout<<"\n Grade A";
	}
	else if(Percent>60)
	{
		cout<<"\n Grade B";
	}
	else if(Percent>45)
	{
		cout<<"\n Grade C";
	}
	else if(Percent>35)
	{
	cout<<"\n Grade D";
	}
	else
	{
		cout<<"\n Fail";
	}
	return 0;
}
	