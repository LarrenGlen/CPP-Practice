
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"input a number";
    cin>>num;
    

    while(num >=10)
        {
            int sum=0,r;
            while(num>0)
            {
            r=num%10;
            num=num/10;
            sum=sum+r;
            }
            num=sum;
        }
    cout<<"the number divised to smallest 2 digit is"<<num;
    
        return 0;
}


