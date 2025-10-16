// functions overloading

#include<iostream>
using namespace std;


int Min(int a,int b)
{
    if(a<b) return a;
    else return b;
}
int Min(int a,int b, int c)
{
    if(a<b && a<c) return a;
    else if(b<c) return b;
    else return c;
}
float Min(float x,float y)
{
    if(x<y) return x;
    else return y;
}

int main()
{
    cout<<Min(10,5);
    cout<<Min(12,7,9);
    cout<<Min(18.0f,9.0f);
    return 0;
}