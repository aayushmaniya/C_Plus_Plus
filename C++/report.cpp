#include<iostream>
using namespace std;
class REPORT
{
	int i;
	int adno;
	char name[20];
	float marks[5];
	float av,total=0;
	float GETAVG()
	{
		for(i=0;i<5;i++)
		{
			total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
			return total;
		}
	}
	public:
void READINFO()
{
	cout<<"enter admin no:";
	cin>>adno;
	cout<<"enter name:";
	cin>>name;
	for(i=0;i<5;i++)
	{
		cout<<"enter marks:";
		cin>>marks[i];
	}
	av=GETAVG();
}
void DISPLAY()
{
	cout<<"admin no:"<<adno<<endl;
	cout<<"name:"<<name<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"marks:"<<marks[i]<<endl;
	}
	cout<<"avra:"<<av<<endl;
}
};
int main()
{
	 REPORT r;
	r.READINFO();
	r.DISPLAY();
}