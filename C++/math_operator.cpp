//ceil()  ->  round up value        3.4->4       3.9->4
//floor() ->  round down value      3.4->3       3.9->3
//round() ->  rounded value         3.4->3       3.9->4
//abs()   ->  absolute value        -13.2->13.2  -3.8->3.8
//sqrt()  ->  square root           16->4        4->2
//pow(x,y)->  x to power y          2,2->4        2,6->64
//rand()  ->  random value generate 






#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    cout<<"ans : "<<rand()%10<<endl;
    cout<<"ans : "<<pow(2,6)<<endl;
    cout<<"ans : "<<sqrt(16)<<endl;
    cout<<"ans : "<<sqrt(4)<<endl;
    cout<<"ans : "<<abs(-13.2)<<endl;
    cout<<"ans : "<<abs(-3.8)<<endl;
    cout<<"ans : "<<round(3.4)<<endl;
    cout<<"ans : "<<round(3.9)<<endl;
    cout<<"ans : "<<floor(3.4)<<endl;
    cout<<"ans : "<<floor(3.9)<<endl;
    cout<<"ans : "<<ceil(3.4)<<endl;
    cout<<"ans : "<<ceil(3.9)<<endl;
}
