#include<iostream>
using namespace std;
int main()
{
 int i,a[5],evensum=0,oddsum=0,total=0;


 for(i=0;i<5;i++)
 {
 cout<<"enter number a["<<i<<"]:";
cin>>a[i];
 }
 for(i=0;i<5;i++)
 {
 if(a[i]%2==0)
  {
   evensum+=a[i];
  }
  else
  {
  oddsum+=a[i];
  }
  total=evensum + oddsum;
  }
  cout<<"\n even sum="<<evensum<<"  \n odd sum="<<oddsum<<"  \n total="<<total;


}