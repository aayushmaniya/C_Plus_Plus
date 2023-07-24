#include<iostream>
using namespace std;
class Base1
{
    protected:
    int m;
    public:
    void setM()
    {
        cout<<"Enter m:";
        cin>>m;
    }
};
class Base2
{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"Enter n:";
        cin>>n;
    }
};
class Dervied: public Base1,public Base2
{
    public:
    void Product()
    {
        cout<<"Product of m and n ="<<m*n<<endl;
    }
};
int main()
{
    Dervied d;
    d.setM();
    d.setN();
    d.Product();
}