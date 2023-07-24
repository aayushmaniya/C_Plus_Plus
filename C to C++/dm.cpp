#include<iostream>
using namespace std;
int main()
{
 int a,b;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;

if((a*b)%21==0)
{
cout<<"\nA is Divisible by 3 and 7";
}
else
{
cout<<"\n A Not divisible by 3 and 7";
}

return 0;
}