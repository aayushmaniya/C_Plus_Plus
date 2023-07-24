#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
    friend Box add(Box,Box);
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
};    

Box add(Box x,Box y)
{
 Box t;   
t.l = x.l + y.l;
t.w = x.w + y.w;
t.h = x.h + y.h;
return t;
}

int main() 
{

    Box a,b,c;
    a.setdata(2,3,4);
    cout<<"Volume of box A is: "<<a.getdata()<<endl;
    b.setdata(8,9,7);
    cout<<"Volume of box B is: "<<b.getdata()<<endl;

    c=add(a,b);
    cout<<"Volume of box C is: "<<c.getdata()<<endl;
}