#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
    public:
    void setdata (int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    friend Box operator++ (Box m)
{
 Box t;   
t.l = ++m.l;
t.w = ++m.w;
t.h = ++m.h;
return t;
}
};
int main() 
{

    Box b,c;
    b.setdata(2,2,2);
    cout<<"Volume of box A is: "<<b.getdata()<<endl;
    c=++b;
    cout<<"Volume of box C is: "<<c.getdata()<<endl;
}