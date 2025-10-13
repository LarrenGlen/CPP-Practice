// store the elements in an array and perform its function 

#include <iostream>
using namespace std;

int main()
{
    int n;
    //n is declared as [100] to store 100 values to be allocated 
    float num[100],sum=0.0,avg;
    cout<<"Enter the number of elments ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". enter the number: ";
        cin>>num[i];
        sum+=num[i];
    }
    
    avg=sum/n;
    cout<<"the average of the number is "<<avg<<endl;

    return 0;
}