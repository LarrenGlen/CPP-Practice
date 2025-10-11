
//making an i*j 2d grid
#include <iostream>
using namespace std;

int main()
{
    int n,count=1;
    cout<<"enter the the multiplication of the matrix grid :";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
 
    }
    return 0;
}