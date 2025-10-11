
//binary serach using while loop 
#include <iostream>
using namespace std;
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int l=0,h=9,mid,key;
    
    cout<<"Enter the key to be found";
    cin>>key;
    
    while(l<=h)
    {
    mid=(l+h)/2;
    if(key==A[mid])
    {cout<<"key found at:"<<mid;
        return 0;
    }
    if(key<A[mid]) h=mid-1;
    else l=mid+1;
    }
    cout<<"key not found ";
    return 0;
    
}
