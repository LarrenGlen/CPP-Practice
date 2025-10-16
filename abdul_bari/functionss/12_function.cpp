//static variables are like global variables having scope limited to the function
 
#include <iostream>
using namespace std;

void fun()
{
    static int a=10;//updates everytimes and not recreated everytime
    a++;
    cout<<a<<endl;
    
}

int main()
{
    fun();
    fun();
    fun();
    fun();
    return 0;
}