
//finding displacement
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int v,u,a;
    float s;
    cout<<"enter initial velocity";
    cin>>u;
    cout<<"enter final velocity";
    cin>>v;
    cout<<"enter acceleration";
    cin>>a;
    s=(v*v - u*u )/(2*a);
    cout<<"the displacement is "<<s<<endl;
    
    return 0;
}
