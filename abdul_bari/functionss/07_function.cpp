// default arguments for overloading 
//maximum of numbers 

#include <iostream>
using namespace std;

int add(int a=0,int b=0, int c=0)
{
    return a>b&&a>c?a:b>c?b:c;
}

int main()
{
    cout<<add()<<endl;
    cout<<add(10)<<endl;
    cout<<add(10,11)<<endl;
    cout<<add(10,11,12)<<endl;
    return 0;
}
