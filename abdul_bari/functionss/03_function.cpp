// addition using multiple functions and function overloading
#include<iostream>
using namespace std;


int sum(int a,int b)
{
    int d= a+b;
    return d;
}
float sum(float a,float b)
{
    float d= a+b;
    return d;
}
int sum(int x,int y,int z)
{
    int d= x+y+z;
    return d;
}
int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(12.9f,8.3f)<<endl;
    cout<<sum(10,20,30)<<endl;
    return 0;
}

