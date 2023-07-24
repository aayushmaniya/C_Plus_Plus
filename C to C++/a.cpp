#include <iostream>
using namespace std;
int main()
{
    int a,b,days, years, weeks;

    cout<<"Enter the value of days:";
    cin>>days; 
    years = days/365; 
    weeks = days/7;
    days = days;
    a= days- (years*365) ;
    b=days-(weeks*7);
    cout<<"\n";
    cout<<"Entered Days: %d \n", days;
    cout<<"Years: %d\n", years;
    cout<<"Remainind days: %d\n",a;
    cout<<"Weeks: %d\n", weeks;
    cout<<"Remainind days: %d\n",b;

    return 0;
}