#include<iostream>
using namespace std;

int aai(int x)
{
 int y=0;
 while(x!=0)
    {
       y=y*10+x%10;
       x/=10;
    }
       return y;
    }
 int main()
{
   int x,n;
   
   cout<<"enter number :";
   cin>>x;
   n=aai(x);
   cout<<"the revers number is "<<n;
   
}