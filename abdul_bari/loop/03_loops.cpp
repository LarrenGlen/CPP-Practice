
//finding the sum of n natural number 
#include <iostream>
using namespace std;

int main()
{
    int n,sum;
    cout<<"enter the number of terms";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum of n natural no is"<<sum<<endl;

    return 0;
}
