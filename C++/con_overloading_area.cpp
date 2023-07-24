#include<iostream>

using namespace std;

class Area
{

public:
 
   Area()
   {
     cout<<"\t Area of Shapes IS "<<endl;
   }

   Area(int l)
   {
       cout<<"Area Of Square : "<<l*l<<endl;
   }
   
   Area(int l,int b)
   {
      cout<<"Area  Of Rectangle Is : "<<l*b<<endl;
   }

   Area(double r)
   {
      cout<<"Area  Of Circle Is : "<<3.14*r*r<<endl;
   }
 
   Area(int b,double h)
   {
     cout<<"Area Of Triangle Is : "<<0.5*b*h<<endl;
   }
};


int main()
{
    Area a,b(5),c(2,5),d(3.14),e(5,0.5) ;
}