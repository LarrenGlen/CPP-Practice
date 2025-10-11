
// roots of a quadratic equation
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    float r1,r2,d;
    
    cout<<"enter the coefficient of a";
    cin>>a;
    cout<<"enter the coefficient of b";
    cin>>b;
    cout<<"enter the coefficient of c";
    cin>>c;
    d = b*b - 4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    
    if(d==0)
    {
        cout<<"the roots of the equation are real and equal"<<endl;
        cout<<"the roots of the equation are "<<r1<<" "<<r2<<endl;
    }
    else if(d>0)
    {
        cout<<"the roots of the equation are real and unequal"<<endl;
        cout<<"the roots of the equation are "<<r1<<" "<<r2<<endl;
    }
    
    else
    {   cout<<"the roots of the equation are imaginary"<<endl; }
    

    return 0;
}
