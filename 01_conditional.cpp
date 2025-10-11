
//prgram to verify roll no 
#include <iostream>
using namespace std;

int main()
{
    int roll;
    cout<<"Enter valid roll no";
    cin>>roll;
    
    if(roll<1)
    {
        cout<<"invalid roll no";
    }
    
    else
    {
        cout<<"valid roll";
    }
    return 0;
}
