// function pointer 
#include <iostream>
using namespace std;

int min(int a,int b, int c)
{
    return (a<b&&a<c) ? a : (b<c) ?b:c;
}
int max(int a,int b,int c)
{
    return (a>b&&a>c) ? a : (b>c) ?b:c;
}

int main()
{
    int (*fp)(int,int,int);
    fp=min;
    int result = (*fp)(30,20,10);
    cout<<"the min of the number is "<<result<<endl;

    fp=max;
    result = (*fp)(30,20,10);
    cout<<"the max of the number is "<<result<<endl;
    return 0;

}