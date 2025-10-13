
//reverse a number 
#include <iostream>
using namespace std;

int main()
{
    int n,r=0,rev=0;
    cout<<"enter a number";
    cin>>n;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"the reversed no is "<<rev;
    return 0;
    
}
