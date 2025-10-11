
//check whether the no is a perfect no or not
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter a number  ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {sum=sum+i;}
        
    }
    if(n*2==sum)
    cout<<n<<" is a perfect number";
    else
    cout<<n<<" n is not a perfect number";

    return 0;
}
