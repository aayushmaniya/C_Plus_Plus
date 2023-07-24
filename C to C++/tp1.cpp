#include <iostream>
using namespace std;

int main()
{
    float maths,chemistry,physics,computer;
    cout<<"Enter marks of maths:";
    cin>>maths;
    cout<<"Enter marks of chemistry:";
    cin>>chemistry;
    cout<<"Enter marks of physics:";
    cin>>physics;
    cout<<"Enter marks of computer:";
    cin>>computer;
    cout<<"Total="<<maths+chemistry+physics+computer;
    cout<<"\nPercentage="<<(maths+chemistry+physics+computer)*100/400;

    return 0;
}