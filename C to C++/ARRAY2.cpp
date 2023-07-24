#include<iostream>
using namespace std;
int main()
{
 int i,p[5],c[5],m[5],total;
 float pr;
 
 for(i=0;i<5;i++)
 {
  cout<<"enter Physics["<<i<<"]=";
  cin>>p[i];
   cout<<"enter Chemistry["<<i<<"]=";
  cin>>c[i];
   cout<<"enter Maths["<<i<<"]=";
  cin>>m[i];
 }
 cout<<"phy\tchem\tmaths\ttotal\tper\tgrade";
 for(i=0;i<5;i++)
 {
  total=p[i]+c[i]+m[i];
  pr=total/3;
  cout<<"\n"<<p[i]<<"\t"<<c[i]<<"\t"<<m[i]<<"\t"<<total<<"\t"<<pr;
  if(p[i]<35||c[i]<35||m[i]<35||pr<35)
  cout<<"   FAIL";
  else if(pr>=75)
  cout<<"   A grade";
  else if(pr>=60)
  cout<<"   B grade";
  else if(pr>=45)
  cout<<"   C grade";
  else
  cout<<"   PASS";
 }

}