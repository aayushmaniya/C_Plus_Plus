#include<iostream>
using namespace std;
int main()
{
float A,p,r,n;
cout<<"Enter the value of p:";
cin>>p;
cout<<"Enter the value of r:";
cin>>r;
cout<<"Enter the value of n:";
cin>>n;
cout<<"A="<<p*(1+(r/100)/n)-p;
return 0;
} 