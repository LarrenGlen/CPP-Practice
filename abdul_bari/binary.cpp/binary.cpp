#include <iostream>
using namespace std;

// once function is learned convert the following into classes and use

int main()
{
    //binary to decimal conversion
    int bin,pow=1,sum=0;
    int temp=bin;

    cout<<"Enter the binary number "<<endl;
    cin>>temp;

    while(temp>0)
    {
        int r=temp%10;
        temp/=10;
        sum+=r*pow;
        pow*=2;
    }

    cout<<"the conversion from binary to decimal is :"<<sum<<endl;

    return 0;

}


