
//basic salary calculations     net salary = basic salary + how much allowed to spend(percentage) - how much deducted (percentage)
#include <iostream>
using namespace std;

int main()
{
    float net,dect,allow,bs;
    cout<<"enter base salary";
    cin>>bs;
    cout<<"enter percentage of montly allowance";
    cin>>allow;
    cout<<"enter percentage of montly deductions";
    cin>>dect;
    net=bs + bs*allow/100 - bs*dect/100;
    cout<<"the net salary is "<<net<<endl;
    
    return 0;
}