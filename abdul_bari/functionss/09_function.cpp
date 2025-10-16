//parameter passing
//call by refernce



#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
//call by reference works as a single module so should be used for only single lines of codde
int main()
{
    int a,b;
    cout<<"give the values of a and b"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"swapped value of a is "<<a<<" "<<"and b is "<<b<<endl;
    return 0;
}