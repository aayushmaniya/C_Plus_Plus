#include<iostream>
using namespace std;
class Box
{
   int l,h,w;
   public:
   void setdata(int a,int b,int c)
   {
    l=a;
    w=b;
    h=c;
   }
   int getdata()
    {
    return l*w*h;
    }
   Box operator+ (Box &n)
   {
   Box t;
   t.l=l+n.l;
   t.w=w+n.w;
   t.h=h+n.h;
   return t;
   }
};
int main()
{
    Box b,a,c;
   
    b.setdata(2,2,2);
    cout<<"BOX B Volume is : "<<b.getdata()<<endl;
    a.setdata(3,3,3);
    cout<<"BOX A Volume is : "<<a.getdata()<<endl;
    
    c=a+b;
    cout<<"BOX C Volume is : "<<c.getdata()<<endl;
}