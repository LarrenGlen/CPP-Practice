
//factorial of  a number 
#include <iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cout<<"Enter a number ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of the number is"<<endl;
    cout<<n<<"!"<<"="<<fact;
    
    return 0;
}
