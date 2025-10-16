// function pointer 
#include <iostream>
using namespace std;

void display()
{ cout<<"hello";}

int main()
{
    void (*fp)();//declaration
    fp=display; //initialization
    (*fp)();//call to function
    return 0;
}