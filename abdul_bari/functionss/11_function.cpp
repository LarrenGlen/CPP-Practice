//block level scope, scope resolution, global variavbles

#include <iostream>
using namespace std;

int a=10;
int main()
{
    int a=30;//high scope first execution
    cout<<a<<endl;
    {
        int a=20;
        cout<<a<<endl;//next execution
    }
    cout<<::a<<endl;//scope resolution value from global variable
    return 0;
    
}