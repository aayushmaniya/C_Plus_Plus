#include<iostream>
using namespace std;
class aayush 
{
        public:
	float Maths,English,Chemistry,Physics,Total,Percent;
   void input()
       {
	cout<<" Enter the marks of Maths:";
        cin>>Maths;
	cout<<endl<<"  Enter the marks of Physics:";
	cin>>English;
	cout<<endl<<"  Enter the marks of Chemistry:";
	cin>>Chemistry;
	cout<<endl<<"  Enter the marks of English:";
	cin>>Physics;
	Total=Maths+English+Chemistry+Physics;
	cout<<endl<<"Total Marks="<<Total;
	Percent=Total/4;
	cout<<endl<<"Total Percent= "<<Percent;
       }
  
     void process()
     {

	if(Maths>=40 && English>=40 && Physics>=40 && Chemistry>=40)	
	{
		cout<<"\n Pass";
	}
	else 
	{
	cout<<endl<<" Fail";
	}
	 if(Percent>75)
	{
		cout<<endl<<"Grade A";
	}
	else if(Percent>60)
	{
		cout<<endl<<"Grade B";
	}
	else if(Percent>45)
	{
		cout<<endl<<"Grade C";
	}
	else if(Percent>35)
	{
		cout<<endl<<"Grade D";
	}
	else
	{
		cout<<endl<<"Fail";
	}
     }
};
int main()
{
   aayush z;
   z.input();
   z.process();
}
	