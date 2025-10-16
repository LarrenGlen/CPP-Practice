//lineay search using array 

#include <iostream>
using namespace std;

int search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(key==A[i])
        return i;
    
        return -1;
    
}

int main()
{
    int A[]={2,4,6,8,10,12,14};
    int n=sizeof(A)/sizeof(A[0]);
    int k;
    cout<<"enter the key to be found :"<<endl;
    cin>>k;
    int index=search(A,n,k);
    
    if(index != -1)
    cout<<"the key is found at index :"<<index<<endl;
    else 
    cout<<"key is not found "<<endl;
    return 0;
}
