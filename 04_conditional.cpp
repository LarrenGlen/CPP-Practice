
// nested finding greatest value
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three values to find the maximum";
    cin>>a>>b>>c;
    
    if(a>b && a>c)
    cout<<a;
    else if(b>c)
    cout<<b;
    else cout<<c;

    return 0;
}