//multiplication table
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the table of multiplication";
    cin>>n;
    
    for(int i=1;i<=10;i++)
    {cout<<n<<"x"<<i<<"="<<i*n<<endl;}

    return 0;
}