
//finding out a prime number
#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter the number";
    cin>>n;
    if(n>1){
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    
    if(count==2)
    cout<<n<<" is a prime number"<<endl;
    else
    cout<<n<<" is not a prime number, it is a cosonent number"<<endl;
    }
    
    else
    cout<<"1 is neither a prime nor a consonent number ";
    
    return 0;
}
