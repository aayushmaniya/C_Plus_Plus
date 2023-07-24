#include <iostream>
using namespace std;
int main()

{
    float hours,minutes,a;
    cout<<"Enter the value of hours:";
    cin>>hours;
    cout<<"Enter the value of minutes:";
    cin>>minutes;
    a=(hours*60)+minutes;
    cout<<"Total number of minutes="<<a;
	return(0);
}
