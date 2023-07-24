#include<iostream>

using namespace std;

class Volume
{

public:
 
   Volume()
   {
     cout<<"\t Volume of Shape IS "<<endl;
   }

   Volume(int length,int width,int height)
   {
       cout<<"Volume Of Rectangular Solid or Cuboid Is : "<<length*width*height<<endl;
   }
   
   Volume(int cube)
   {
      cout<<"Volume  Of Cube Is : "<<cube*cube*cube<<endl;
   }

   Volume(double radius,double height)
   {
      cout<<"Volume  Of Cylinder Is : "<<3.14*radius*radius*height<<endl;
   }
 
   Volume(int b,double h)
   {
     cout<<"Volume Of Pyramid Is : "<<0.3*b*h<<endl;
   }
       Volume(double r)
   {
     cout<<"Volume Of Sphere Is : "<<4/3*3.14*r*r*r<<endl;
   }
    
};


int main()
{
    Volume a,Shape(2,4,2),Shape2(3),Shape3(1.2,3.4),c(1,0.3),b(1.2);
}