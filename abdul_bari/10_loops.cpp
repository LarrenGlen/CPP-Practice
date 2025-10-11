//armstrong number
#include <iostream>
using namespace std;

int main()
{
    int n,r=0,sum=0;
    cout<<"enter a number";
    cin>>n;
    
    int original=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r*r*r;

    }
    if(sum==original)
    cout<<"it is an armstrong no ";
    else
    cout<<"it is not an armstrong no ";


    return 0;
    
}
