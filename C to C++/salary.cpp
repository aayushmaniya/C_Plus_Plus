#include<iostream>
using namespace std;
int main()
{
	int a,gross_salary,da,hra;
	cout<<" enter salary:";
	cin>>a;
	if(a<=5000)
	{
		da=(a*8)/100;
		hra=(a*20)/100;
		gross_salary=da+a+hra;
		cout<<"gross_salary is "<<gross_salary;
	}
	else if(a<=10000)
	{
		da=(a*12)/100;
		hra=(a*30)/100;
		gross_salary=da+a+hra;
	cout<<"gross_salary is "<<gross_salary;
	}
	else if(a<=15000)
	{
		da=(a*15)/100;
		hra=(a*40)/100;
		gross_salary=da+a+hra;
		cout<<"gross_salary is "<<gross_salary;
	}
	else 
	{
		da=(a*20)/100;
		hra=(a*50)/100;
		gross_salary=da+a+hra;
		cout<<"gross_salary is "<<gross_salary;
	}
	return 0;
}