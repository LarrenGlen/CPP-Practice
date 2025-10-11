
//validation code check whether the denominator is valid
#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;
    
    if(b==0)
     {cout<<"division by 0 is not defined";}
    else
    {
        c=a/b;
        cout<<c<<endl;
    }

    return 0;
}
