
//roots of the quadratic equation
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    float r1,r2;
    
    cout<<"enter the coefficient of a";
    cin>>a;
    cout<<"enter the coefficient of b";
    cin>>b;
    cout<<"enter the coefficient of c";
    cin>>c;
    
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"the roots of the equation are "<<r1<<" "<<r2<<endl;

    return 0;
}