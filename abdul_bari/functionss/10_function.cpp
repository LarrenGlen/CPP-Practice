// return by adress 
//multiples of 5 by pointing to a function 

 
#include <iostream>
using namespace std;

int *fun()
{
    int *p=new int[10];
    for(int i=0;i<10;i++)
    {p[i]=5*(i+1);}
    return p;

}

int main()
{
    int *q=fun();
    for(int i=0;i<10;i++)
    {cout<<q[i]<<endl;}
    delete[] q;
    return 0;

}