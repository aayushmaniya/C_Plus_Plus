#include<iostream>
using namespace std;
class ABC
{
    protected:
    int n;
    public:
    void a()
    {
    cout<<"Enter n:";
    cin>>n;
    }
};
class zzz
{
    public:
    void z()
    {
    cout<<"Your table is completed";
    }
};
class CBA: public ABC,public zzz
{
   protected:
   int i,j;
   public:
   void b()
   {
   for(i=1;i<=10;i++)
   {
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
   }
   }
    
};
int main()
{
 CBA x;
 x.a();
 x.b();   
 x.z();
}