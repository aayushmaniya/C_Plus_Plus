#include <iostream>
using namespace std;
int main() 
{ 
    int A, B, C; 
  
    cout<<"Enter the value of A: "; 
    cin>>A; 

    cout<<"Enter the value of B: "; 
    cin>>B; 

    cout<<"Enter the value of C: "; 
    cin>>C; 


if(A==B)
{
if(A==C)
{
cout<<"\nA="<<A<< " is the largest number amongs all numbers"; 
cout<<"\nB="<<B<< " is the largest number amongs all numbers"; 
cout<<"\nC="<<C<< " is the largest number amongs all numbers"; 
}

}
else
{ 
    if (A > B) 
   { 
        if (A > C) 
           cout<<"A="<<A<<" is the largest number amongs all numbers"; 
        else
            cout<<"C="<<C<<" is the largest number amongs all numbers"; 
    } 
    else { 
        if (B > C) 
            cout<<"B="<<B<<" is the largest number amongs all numbers"; 
        else
            cout<<"C="<<C<<" is the largest number amongs all numbers"; 
    } 
}

    

    return 0; 
}




