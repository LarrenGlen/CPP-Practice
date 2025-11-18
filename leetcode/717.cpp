#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        int n=bits.size();
        while(i<n-1)
        {
            if(bits[i]==1) 
            {i+= 2;}
            else
            {i += 1;}   
        }

        return i == n-1;
        
    }
};

int main()
{
    Solution sol;
    int n;
    cout<<"enter the length of the array :"<<endl;
    cin>>n;

    vector<int> bits(n);
    cout<<"enter the binary bits (0 or 1)"<<endl;
    {
        for(int i=0;i<n;i++)
        {
            cin>>bits[i];
        }
    }

    bool result = sol.isOneBitCharacter(bits);
    cout<<"the result is "<<(result ?"true":"false")<<endl;
    return 0;

}