#include<iostream>
using namespace std;
 int main()
 {
	char c,i;
	
	for(c=65;c<=90;c++)
	{
		i=c+32;
		cout<<"\n"<<(char)c<<"-"<<(char)i;
	}

}