
//verify the eligibility of the age 
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age ";
    cin>>age;
    if(age>=1 && age<=115)
    {
    if(age<=19 || age>=80)
     {cout<<"eligible";}
    else
    {
        cout<<"not eligible"<<endl;
    }
    }
    else
    {
        cout<<"invalid age"<<endl;
    }

    return 0;
}