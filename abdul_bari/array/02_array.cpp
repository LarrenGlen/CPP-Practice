
//maximum value of the number
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int A[11]={2,4,6,8,10,2,4,6,8,10,12};
    int max=INT_MIN;
    
    for(auto i:A)
    {
        if(i>max)
        max=i;
    }
    
    cout<<"the maximum value of the array is "<<max;
    return 0;

}

//minimum value of a number

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int A[11]={-2,-4,-6,-8,-10,-2,-4,-6,-8,-10,-12};
    int min=INT_MAX;
    
    for(auto i:A)
    {
        if( i<min)
        min=i;
    }
    
    cout<<"the minimum value of the array is "<<min;

    return 0;

}