// pointer arithmetic 

#include <iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12,14};
    int *p=A;
    //adress of the pointer at 0 index
    cout<<p<<endl;    
    //variable of the pointer at 0 index
    cout<<*p<<endl;    
    //one location forward 
    cout<<*++p<<endl;    
    //one location backward
    cout<<*--p<<endl;
    //desired location address forward
    cout<<p+2<<endl;
    //desired location  forward
    cout<<*(p+2)<<endl;
    //desired location address backward 
    cout<<p-2<<endl;    
    //desired location backward 
    cout<<*(p-2)<<endl;
    
    return 0;
}