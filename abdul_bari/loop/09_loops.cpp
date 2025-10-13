
//pallinrome
#include <iostream>
using namespace std;

int main()
{
    int n,r=0,rev=0;
    cout<<"enter a number";
    cin>>n;
    
    int original=n;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==original){
        cout<<"it is a pallinrome";
    }
    else
    cout<<"it is not a pallinrome";

    return 0;
    
} 
