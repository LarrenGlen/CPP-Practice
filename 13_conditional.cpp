// count number of negative and positive number in array and count the number of odd numbers and positive numbers 
#include <iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,10,0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    int ncount=0,pcount=0,count=0,odd=0,even=0;


    for(int i:A)
    {count++;}
    cout<<"elements = "<<count<<endl;    
    
    for(int i:A)
    {
        if(i<0) 
        {ncount++;}
        if(i>0) 
        {pcount++;}
    }
    cout<<"negative = "<<ncount<<endl;
    cout<<"positive = "<<pcount<<endl;
    
    for(int i:A)
    {
        if(i%2==0 && i!=0) even++;
        if(i%2!=0 && i!=0) odd++;

    }
    
    cout<<"even = "<<even<<endl;
    cout<<"odd = "<<odd<<endl;
    return 0;
    
}
