
//displaying matrix in sophistiacted form 
#include <iostream>
using namespace std;

int main()
{
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
