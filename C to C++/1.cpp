#include<iostream>
using namespace std;
int main()

{
char ch;

cout<<"enter ch:";
cin>>ch;

cout<<"entered ch="<<(char)ch;
if(ch<=65 && ch<=90)
{
cout<<"\ncross ch="<<(char)(ch+32);
}
else
{
cout<<"\ncross ch="<<(char)(ch-32);
 }


}