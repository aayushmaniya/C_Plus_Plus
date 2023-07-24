#include<iostream>
using namespace std;

#define n 5
int display(int a[])
{   int i;
   for (i=0;i<n;i++)
  {
     cout<<" "<<a[i];
  }
}
  int main()
{
 int arr[n],i;

 for (i=0;i<n;i++)
    {
      cout<< "enter value ..";
       cin>>arr[i];
    }
  display(arr);
;
}